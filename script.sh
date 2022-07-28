#!/bin/bash

git add . && git commit -m "update" && git push \
&& bundle exec jekyll build && cd _site && git add . && git commit -m more && git push && cd ..
