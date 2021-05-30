from distutils.core import setup

with open("README.md", "r") as fh:
    long_description = fh.read()
    fh.close()

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
)
