# Beep Boop

## Converting

This simple program written in C can be used to encode a message into beeps and boops like this:
```sh
./tb 'Message'
```
Output:
```
boop beep boop boop beep beep boop beep boop beep beep boop boop beep boop beep boop beep beep beep boop boop beep beep boop beep beep beep boop boop beep beep boop beep beep boop boop boop boop beep boop beep beep boop boop beep beep beep boop beep beep boop boop beep boop beep
```

## Decoding

The shell script `decode.sh` can be used to decode a converted message like this:
```sh
./decode.sh 'boop beep boop boop beep beep boop beep boop beep beep boop boop beep boop beep boop beep beep beep boop boop beep beep boop beep beep beep boop boop beep beep boop beep beep boop boop boop boop beep boop beep beep boop boop beep beep beep boop beep beep boop boop beep boop beep'
```
Output:
```
Message
```
