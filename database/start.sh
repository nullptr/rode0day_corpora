#!/bin/bash

export PGHOST=/tmp
export PGDATA=$HOME/db
export DB_DIR=$HOME/db
export LOG=$DB_DIR/log.txt


# DB setup - only run once by hand
# pg_ctl -D $DB_DIR -l $LOG initdb
# cp postgresql.conf pg_hba.conf $DB_DIR/
# pg_ctl -D $DB_DIR -l $LOG start
# pgsql -h /tmp -D postgres
# ALTER ROLE "AN24929" with password 'notmyfirstrodeo';
# pg_ctl -D $DB_DIR -l $LOG stop

# Grab an entire node to run the database. Then start postgres
salloc -p normal \
	--constraint=opteron \
	--exclusive -O \
	-N 1 \
	--qos=high  \
	srun  pg_ctl -D $DB_DIR -l $LOG start
