# Beep Boop

## Encoding

This is a simple program written in C for converting a message into beeps and boops:
```sh
./tb 'Message'
```
Which will result in the following output:
```
boop beep boop boop beep beep boop beep boop beep beep boop boop beep boop beep boop beep beep beep boop boop beep beep boop beep beep beep boop boop beep beep boop beep beep boop boop boop boop beep boop beep beep boop boop beep beep beep boop beep beep boop boop beep boop beep
```

## Decoding

There is also a shell script called `decode.sh`, which can be used to decode an encoded message like this:
```sh
./decode.sh 'boop beep boop boop beep beep boop beep boop beep beep boop boop beep boop beep boop beep beep beep boop boop beep beep boop beep beep beep boop boop beep beep boop beep beep boop boop boop boop beep boop beep beep boop boop beep beep beep boop beep beep boop boop beep boop beep'
```
Which will result in the following output:
```
Message
```
