# Rode0day competition binaries

[![pipeline status](https://gitlab.com/Rode0day/corpora/badges/master/pipeline.svg)](https://gitlab.com/Rode0day/corpora/commits/master)
[![coverage report](https://gitlab.com/Rode0day/corpora/badges/master/coverage.svg)](https://gitlab.com/Rode0day/corpora/commits/master)


### Building instrumented binaries:

The provided build script provides options to build challenges for use with 
various fuzzers. Here's an example of building `hfuzz-clang` instrumented 
32-bit binaries to use with Honggfuzz.  
- `./scripts/build.sh --build 1809 --cc hfuzz-clang`
- If you don't have Honggfuzz compiled you can use a provided Docker image:
- `./scripts/build.sh --docker honggfuzz --target greps`

Or just download pre-built instrumented binaries (zip archives):
- [afl-clang-fast](https://gitlab.com/Rode0day/corpora/-/jobs/artifacts/master/download?job=build:all)
- [hfuzz-clang](https://gitlab.com/Rode0day/corpora/-/jobs/artifacts/master/download?job=build:hfuzz)
- [angora-clang](https://gitlab.com/Rode0day/corpora/-/jobs/artifacts/master/download?job=build:angora)




### Fuzzing usage:

If you want to fuzz the non-instrumented competition binaries with a pre-built 
docker container, use the `build.sh` and `launch.sh` scripts.

- `./scripts/build.sh --prep` will download the binaries copy a few required 
  files and create default job config files.
- `./scripts/launch.sh --fuzzer afl --pull -N 3 --test jpegb` will pull the 
  AFL [image](https://gitlab.com/Rode0day/fuzzer-testing/container_registry)
  and launch a container with with 3 instances (cpu cores) of AFL againsts 
  the 3/greps (18.09) challenge.





