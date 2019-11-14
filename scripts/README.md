# scripts

[scripts/build.sh](scripts/build.sh)

**Examples**

`./scripts/build.sh --docker afl --build all`


- build all targets for all fuzzers

```
./scripts/build.sh --prep
(cd 10 && ./fix_tcpdump_for_i386.sh)
./scripts/build.sh --docker afl --build all
./scripts/build.sh --docker honggfuzz --build all
(cd 10 && ./fix_tcpdump_for_x86_64.sh)
./scripts/build.sh --docker angora --build all
```

```
Usage: ./scripts/build.sh 
        -b|--build <all|MMYY>       default action is to build all, otherwise identify competition by MMYY (i.e. 1809)
    OR
        -t|--target <target_name>   build a single target 
    -L|--no-lavalogs                remove CFLAG option -DLAVA_LOGGING (bug reporting)
    -W|--show-warnings              remove CFLAG option -w (warnings enabled)
    -X|--no-i386                    remove CFLAG option -m32 
    --cc <compiler>                 specify the compiler (CC)
    --gcov                          build gcov binary in gcov directory
    --ccov                          build Clang coverage binaries in ccov directory
    --ccov                          build Clang sanitizer coverage binaries in scov directory
    --clean                         execute 'Make clean' on all directories

Usage: ./scripts/build.sh 
    --download                      download all released competition binaries
    --create-configs                create job config files for all supported fuzzers
    --copy-files                    copy required files (magic.mgc)
    --prep                          download; create configs; copy files; exit 
    --help
```


[scripts/launch.sh](scripts/launch.sh)

**Examples**

`./scripts/launch.sh --fuzzer afl -N 1 --test greps`

`./scripts/launch.sh --fuzzer qsym -N 2 --limit 21600 grepb`

```
Usage: ./scripts/launch.sh 
    --fuzzer <fuzzer_name> [--pull]  default fuzzer is AFL, otherwise specify a fuzzer, optionally force pull docker image
    -N <# instances>                number of cores to use while fuzzing 
    --limit <# seconds>             total number of seconds to run fuzzing campaign
    --test                          run a fuzzing campaign for 15 min
    <target_name>                   REQUIRED: target to be fuzzed
```


[scripts/crete_configs.py](scripts/create_configs.py)

**Examples**
- update one job config with new settings

`./scripts/create_configs.py --example 3/jpegb/afl_job.json -Q `

- update one job config from example with new settings

`./scripts/create_configs.py --example 3/jpegb/job.json --config afl_job.json -Q `

- update one competition with new settings

`./scripts/create_configs.py --example 3/jpegb/afl_job.json --yaml 3/info.yaml -Q --time-limit 21600`
`./scripts/create-configs.py --example 3/jpegb/honggfuzz_job.json --yaml 14/info.yaml --config honggfuzz_job.json -Q -j HF`

```
usage: create-configs.py [-h] --example EXAMPLE [--yaml YAML]
                         [--config CONFIG] [-j NAME] [--prefix PREFIX]
                         [--fuzzer FUZZER] [--input INPUT] [--output OUTPUT]
                         [-Q] [--file FILE] [--timeout TIMEOUT]
                         [--mem-limit MEM_LIMIT] [--time-limit TIME_LIMIT]
                         [--exec-limit EXEC_LIMIT] [--docker DOCKER]
                         [--more-args AFL_MARGS] [--dictionary DICT]
                         [--master-instances MASTER_INSTANCES]
                         [--afl-no-det DIRTY] [--afl-dumb DUMB]
                         [--environment ENVIRONMENT] [--extras EXTRAS]

create/update config file[s] for fuzzing jobs

optional arguments:
  -h, --help            show this help message and exit
  --example EXAMPLE     Template job config file
  --yaml YAML           Rode0day 'info.yaml' file (create all job configs)
  --config CONFIG       Job config filename (default=job.json)
  -j NAME, --name NAME  Job name prefix (default=AFL)
  --prefix PREFIX       binary path prefix (lava-install)
  --fuzzer FUZZER       path to fuzzer binary
  --input INPUT         seed directory
  --output OUTPUT       sync directory
  -Q, --qemu            QEMU mode
  --file FILE           name of input file (if requited)
  --timeout TIMEOUT     timout for executions (ms)
  --mem-limit MEM_LIMIT
                        memory limit for child process (MB)
  --time-limit TIME_LIMIT
                        fuzzing campaign time limit
  --exec-limit EXEC_LIMIT
                        fuzzing campaign execution limit
  --docker DOCKER       docker container for fuzzing (multi-container mode)
  --more-args AFL_MARGS
                        extra arguments for fuzzer
  --dictionary DICT     AFL/Libfuzzer dictionary file/directory
  --master-instances MASTER_INSTANCES
                        # of master instances (0-?)
  --afl-no-det DIRTY    AFL quick & dirty (skip deterministic steps
  --afl-dumb DUMB       AFL fuzz without instrumentation (dumb mode)
  --environment ENVIRONMENT
                        Environment variables, comma separated list of VAR=VAL
  --extras EXTRAS       Extra options, comma separate list of var=val
```
