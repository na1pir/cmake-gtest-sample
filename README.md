# cmake-gtest-sample

I made this project as a boilerplate to quickly create C/C++ projects using cmake as the build tool and gooogletest as the unit test tool. I tested it on a OSX El Capitan but "should work elsewhere".

## Installation

You should install the following gems:
* [CMake](https://cmake.org/)
 Necessary for multiplatform build
* [CppUTest](http://cpputest.github.io/)
 All test code done using this framework

## Usage

1. Clone this repo to your desired path, ie: under $HOME/repos:
	```
	cd $HOME/repos
	git clone https://github.com/rulas/cmake-gtest-sample.git
	```

2. Clone the googletest framework to your desired path, ie: under $HOME/repos
	```
	cd $HOME/repos
	git clone https://github.com/google/googletest.git
	```

3. Build googletest with default options
	```
	cd $HOME/repos/googletest/googletest
	cmake .
	make
	```

4. export the GTEST_ROOT environment variable with the path to your google path folder
	```
	export GTEST_ROOT=$HOME/repos/googletest/googletest
	```

5. build this repo
	```
	cd $HOME/repos/cmake-gtest-sample
	cmake .
	make
	```

6. Run test
	```
	./RunTest
	```


## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

## History

Just me, spending long time trying to get googletest up and running.

## Credits

All credit goes to cmake and googletest developers who made these wonderful gems.


## License

You just DO WHAT THE FUCK YOU WANT TO 