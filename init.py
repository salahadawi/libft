#! /usr/bin/env python3

import os, sys, shutil

# Files that will be removed
files = ["README.md", "init.py"]

# Directories that will be removed
directories = [".git"]

# Path will always be equal to script location, to avoid removing wrong files
libft_dir = sys.path[0]
os.chdir(libft_dir)

# Printing instructions and info to terminal
print("Working directory: " + libft_dir)
print("The following files will be removed:")
# Printing each file to be removed
for name in files:
	print(name)
# Printing each directory to be removed
for name in directories:
	print(name)

# Get user input
print("\ny/yes to remove, anything else to cancel")
cmd = input()

# If input is y/yes case-insensitive, remove files, else do nothing
if cmd.lower() == "yes" or cmd.lower() == "y":

	for name in files:
		try:
			os.remove(name)
			print(name + " removed succesfully!")
		except:
			print(name + " not found. No operation performed.")
	for name in directories:
			shutil.rmtree(libft_dir + "/" + name)
			print(name + " removed succesfully!")
else:
	print("Removal cancelled.")