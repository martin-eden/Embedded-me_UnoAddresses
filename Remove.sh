#!/bin/bash

# Uninstall library
arduino-cli lib uninstall me_UnoAddresses

# Uninstall dependencies
arduino-cli lib uninstall \
  me_BaseTypes
