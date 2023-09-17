FROM ubuntu:22.04
WORKDIR /code

RUN apt update
RUN apt install -y build-essential git iproute2 iputils-ping netcat-openbsd
