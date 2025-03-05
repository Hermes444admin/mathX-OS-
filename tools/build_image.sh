#!/bin/bash

# Build the kernel and other components
make -C ../build

# Check if the build was successful
if [ $? -ne 0 ]; then
    echo "Build failed. Exiting."
    exit 1
fi

# Create the OS image
echo "Creating OS image..."
dd if=/dev/zero of=os_image.img bs=1M count=10
mkfs.ext2 os_image.img

# Mount the image
mkdir -p /mnt/os_image
sudo mount -o loop os_image.img /mnt/os_image

# Copy built files to the image
sudo cp ../build/kernel ../build/drivers ../build/fs /mnt/os_image/

# Unmount the image
sudo umount /mnt/os_image

echo "OS image created successfully: os_image.img"