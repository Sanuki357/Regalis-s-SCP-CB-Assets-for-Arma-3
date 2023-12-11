<p align="center">
    <img src="https://github.com/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3/blob/main/SCP_CB_logo.png" width="240">
</p>

<p align="center">
    <a href="https://github.com/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3/releases/latest">
        <img src="https://img.shields.io/github/v/release/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3?logo=github" alt="RSCPCB Version">
    </a>
    <a href="https://github.com/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3/issues">
        <img src="https://img.shields.io/github/issues-raw/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3.svg?logo=github&style=flat-square&label=Issues" alt="RSCPCB Issues">
    </a>
    <a href="https://github.com/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3/releases">
        <img src="https://img.shields.io/github/downloads/Sanuki357/Regalis-s-SCP-CB-Assets-for-Arma-3/total.svg?logo=github&style=flat-square&label=Downloads" alt="RSCPCB Downloads">
    </a>
    <a href="https://discord.gg/XQ24K3vxzv">
        <img src="https://img.shields.io/discord/870904834193231944?logo=discord" alt="RSCPCB Discord">
    </a>
<br>
    <img src="https://img.shields.io/badge/Build-Production-green" alt="production build stats">
    <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2560357734">
        <img src="https://img.shields.io/steam/views/2560357734?logo=steam" alt="RSCPCB Steam Views">
    </a>
     <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2560357734">
        <img src="https://img.shields.io/steam/favorites/2560357734?logo=steam" alt="RSCPCB Steam Favorites">
    </a>
     <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2560357734">
        <img src="https://img.shields.io/steam/subscriptions/2560357734?logo=steam" alt="RSCPCB Steam Subscribers">
    </a>
    <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2560357734">
        <img src="https://img.shields.io/steam/downloads/2560357734?logo=steam" alt="RSCPCB Steam Downloads">
    </a>
</br>
    <img src="https://img.shields.io/badge/Build-Development-blue" alt="development build stats">
    <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2758207071">
        <img src="https://img.shields.io/steam/views/2758207071?logo=steam" alt="RSCPCB Dev Steam Views">
    </a>
     <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2758207071">
        <img src="https://img.shields.io/steam/favorites/2758207071?logo=steam" alt="RSCPCB Dev Steam Favorites">
    </a>
     <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2758207071">
        <img src="https://img.shields.io/steam/subscriptions/2758207071?logo=steam" alt="RSCPCB Dev Steam Subscribers">
    </a>
    <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2758207071">
        <img src="https://img.shields.io/steam/downloads/2758207071?logo=steam" alt="RSCPCB Dev Steam Downloads">
    </a>
    
    
    
</p>
<p align="center">
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a>.<br/></strong></sup>
</p>

# Arma3 AddOn SCP - Regalis's Containment Breach Assets

The project template comes with it's own implementation of tools used within the ACE project, such as build and release scripts, SQF validation scripts and more.

### Development Environment

See the [ACE3 documentation](https://ace3mod.com/wiki/development/setting-up-the-development-environment.html) on setting up your development environment.

When making the folder for cba in the x folder it is recommended to get the latest CBA_A3 release from github instead of an empty folder. as this links directly to CBA_A3 instead of ACE3


### Usage

Search and replace all mentions of the following:
```
RegalisSCP_CB by {your_prefix}
```

```
SCP_CB by {SCP_CB}
```
Note that both lower and upper case are necessary. Once done, replace the logo (`logo_RegalisSCP_CB_ca.paa`) by your own. Keep the same aspect ratio and file extension (`.paa`). This is important for good results in game. Also remember to rename the logo file to `logo_{your_prefix}_ca.paa`.


##### Example:

```
RegalisSCP_CB
```

```
SCP_CB
```

### Tooling

Once that is all done, run the `setup.py` tool found in the tools directory of your project. This will create the necessary links between your Arma installation, your P Drive and your project source directory.

You can use `build.py` to pack your PBOs for use during development and use `make.py` to create binarized PBOs for release.

#### Releasing a binarized build

You can use make to manage versioning and packing up your release version.

Fresh build and package it up for a release:
```bash
tools/make force checkexternal release 0.6.0
```

Build just a binarized version:
```bash
tools/make
```

### Versioning

You can also manage versioning through the make tool. To do this, navigate to the `addons/main` directory. In there, is a file called `script_mod.hpp`. This contains the following:

```sqf
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0
```

<<<<<<< Updated upstream
Modify the numbers in here to represent your build version. The example listed above would be: `0.6.0.69`. This version will be set in each pbo during binarizing. It will also be used in the signature file names, along the commit hash. This will make it easier to identify the exact version that is being used.
=======
Modify the numbers in here to represent your build version. The example listed above would be: `0.6.0.69`. This version will be set in each pbo during binarizing. It will also be used in the signature file names, along the commit hash. This will make it easier to identify the exact version that is being used.
>>>>>>> Stashed changes


### Using CI

This template comes with some basic scripts to validate and enforce parts of the ACE3 coding guidelines. You can find those scripts in the tools directory.

- sqf_validator.py - checks all .sqf files in the addons directory and checks for missing brackets, missing semi-colons and tab usage.
- config_style_checker.py - checks all .hpp and .cpp files in the addons directory and checks for missing brackets and tabs.

For more information on the guidelines, see ACE3 coding guidelines.

You can use these scripts in combination with CI - if you are on GitHub and use Travis-CI, here is an example:

```yml
language: python
python:
- '3.4'
script:
- python3 tools/sqf_validator.py
- python3 tools/config_style_checker.py
```

### Adding new components

Adding a new component to your project is done by copying the example component directory and renaming it. Follow these steps:

- Copy the blank example component directory into the addons directory
- Rename the component directory name (blank -> {your component name})
- Do a search and replace of `blank` by `your component name`. Take care to preserve case sensitivity.
- Do a search and replace of `Blank` by `your component name`  in beautified form, like `Ace` with upper and lower casing. Take care to preserve case sensitivity at search.
- Ensure that the required AddOns in the `config.cpp` file inside your new component are set correctly. You will need at least a requirement to the main component of your project. Any other modifications that your component depends on will also need to be listed here, including your own components that you depend upon.
- Start work on your component.
