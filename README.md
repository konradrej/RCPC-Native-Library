<div id="top"></div>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![GPL v3.0 License][license-shield]][license-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/konradrej/RCPC-Native-Library">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">RCPC Native Library</h3>

  <p align="center">
    This project is part of RCPC, for more information see <a href="https://github.com/konradrej/RCPC">here</a>
    <br />
    <br />
    <a href="https://github.com/konradrej/RCPC-Native-Library/issues">Report Bug</a>
    ·
    <a href="https://github.com/konradrej/RCPC-Native-Library/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#building">Building</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This project provides a windows dll for use with the <a href="https://github.com/konradrej/RCPC-Native-Library">RCPC Windows Server.</a> It provides native features such as media buttons and volume control.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

### Prerequisites 
- C compiler

### Building

To build a dll use the following command.
```
g++.exe -shared -Wl,--output-def=bin\Release\libRCPC-Native-Library.def -Wl,--out-implib=bin\Release\libRCPC-Native-Library.a -Wl,--dll  obj\Release\main.o  -o bin\Release\RCPC-Native-Library.dll -s  -luser32 -lOle32
```

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

This project is not designed for use by itself.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

To see the roadmap for future features as well as known issues see the [open issues](https://github.com/konradrej/RCPC-Native-Library/issues) and the <a href="https://github.com/konradrej/RCPC#roadmap">RCPC repository</a>

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the GNU GPL v3.0 License. See `LICENSE` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Konrad Rej - rej.konrad@gmail.com

Project Link: [https://github.com/konradrej/RCPC-Native-Library](https://github.com/konradrej/RCPC-Native-Library)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* [Best README template](https://github.com/othneildrew/Best-README-Template)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/konradrej/RCPC-Native-Library.svg?style=for-the-badge
[contributors-url]: https://github.com/konradrej/RCPC-Native-Library/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/konradrej/RCPC-Native-Library.svg?style=for-the-badge
[forks-url]: https://github.com/konradrej/RCPC-Native-Library/network/members
[stars-shield]: https://img.shields.io/github/stars/konradrej/RCPC-Native-Library.svg?style=for-the-badge
[stars-url]: https://github.com/konradrej/RCPC-Native-Library/stargazers
[issues-shield]: https://img.shields.io/github/issues/konradrej/RCPC-Native-Library.svg?style=for-the-badge
[issues-url]: https://github.com/konradrej/RCPC-Native-Library/issues
[license-shield]: https://img.shields.io/github/license/konradrej/RCPC-Native-Library.svg?style=for-the-badge
[license-url]: https://github.com/konradrej/RCPC-Native-Library/blob/master/LICENSE