from distutils.core import setup, Extension
import numpy

with open("README.md", "r") as fh:
    long_description = fh.read()
    fh.close()

seso = Extension('seso',
                     sources=['seso/seso.c'],
                     include_dirs=[numpy.get_include()])

setup(
    name="seso",
    version="0.1",
    author="Ajith Ramachandran",
    author_email="ajithar204@gmail.com",
    description="Search and Sort Algorithms",
    long_description=long_description,
    url="https://github.com/AjithRamachandran/seso",
    keywords='search and sort',
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    ext_modules=[seso],
)
