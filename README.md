# Database

> It is a pandemic. Life is a mess. There is no end in sight. Each of us do not know how long it will be until it is our turn to catch the corona. 
> **Instead of living in fear and huffing leach, you should focus on what really matters in life: Database.**

Database Courses, Lectures and Programs.

This Repo is almost based on Following Courses, and the rest is based on my college courses.



- [CMU CS15-445 Database System: Core](https://15445.courses.cs.cmu.edu/fall2020/)
- [CMU CS15-415 Database System: Application](https://15415.courses.cs.cmu.edu/fall2016/)
- [MIT 6.824 Distributed System](https://pdos.csail.mit.edu/6.824/schedule.html)
- [MIT 6.830 Database System](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-830-database-systems-fall-2010/)


# CMU CS15-445: Database System

**Overview**

This course is on the design and implementation of database management systems. Topic include data models(relational, document, key/value), storage models(n-ary, decomposition), query language(SQL, stored procedures), storage architectures(heaps, log-structured), indexing(order preserving trees, hash tables), transaction processing(ACID, concurrency control),recovery(logging, checkpoints),query processing(joins, sorting, aggregation, optimization), and parrallel architectures(multi-core, distributed).

**BUSTUB**

>Architecture

- Disk-Oriented Storage
- Volcano-style Query Processing
- Pluggable APIs
- Currently does not support SQL

## Lecture 1: Overview

**Flat File Strawman**

Store our database as comma-seperated value(CSV) files that we manage ourselves in our application code. 
- Use a seperate file per entity.
- The application must parse the files each time they want to read/update records.

```python
# Query Artist(name, year, country)
# Get the year Ice Cube went solo
for line in file.readlines():
    record = parse(line)
    if "Ice Cube" == record[0]:
        print(int(record[1]))

```
**Problem**

- How do we ensure that the artist is the same for each album entry?
- What if somebody overwrites the album year with an invalid string?
- What if there are multiple artists on an album?
- What happens if we delete an artist that has albums?
- How do you find a particular record?
- What if we now want to create a new application that uses the same database?
- What if two threads try to write to the same file at the same time?
- What if the machine crashes while our program is updating a record?
- What if we want to replicate the database on multiple machines for high availability?

**DBMS**

A DBMS is software that allows applications to store and analyze information in a database. 


