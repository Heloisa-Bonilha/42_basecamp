#!/bin/sh
ip addr show | grep ether | awk -F " " '{print $2}'