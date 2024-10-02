/*
A simple very old method of sending messages is the substitution cipher.

I remember using this as a kid with some of my friends.

We used to have something called a secret decoder ring.

And the idea is you have a message and then you look at every character in that message and you replace it with the character on the ring.

So for example, every time you see a lowercase a it gets replaced with a capital x or every time you see a lowercase b it gets replaced with a capital z and so forth.

So it's called the substitution cipher.

It's really a straightforward cipher.

It's not a very secure cipher at all, but it's a fun cipher to do.

So here's the idea.

I want you to write a program that asks the user to enter a secret

message, that'll be a string.

And then I want you to encrypt that message using the substitution cipher

and display the encrypted message.

Then take that encrypted message and decrypt it back to the original message, okay? You can use two strings for your substitution.

You can have one string for the alphabet.

And let me write this here for you that way you maybe understand a little bit better.

So let's say you have one string which is the alphabet.

And this string contains all the characters that you want to substitute.

So for example, let's say we've got a b c and so forth.

And capital a capital b capital c.

Okay, then I've got another string called the key.

And you can name these anything you like.

And the idea here is that for every character up in the alphabet string, you're going to have a character in the key string that'll substitute it.

So if i want to substitute that lowercase a for an x, it'll be here.

And let's say that the b gets a z and the c gets a q and then this uppercase a gets a lowercase, let's say, z, a lowercase q and a lowercase d, it doesn't really matter what you replace them with.

So now the idea is really straightforward.

Whenever you see the secret message, let's say, the secret message is a b c, you look in the alphabet.

You look for that little a, you find it.

You find it in position 0.

Then you go to the key, look in position 0, whatever is there you replace it.

You do the same thing with lowercase b.

It's going to be replaced with the z.

And you do the same thing with the lowercase c, it'll replace it with a q.

Okay, obviously you just keep going down the string, whatever you find, you replace, so that would be my original message, this is now my encrypted message. How would i decrypt the message? Do the samething just the other way around.

You look in the key for an x.

I find it at position 0.

So I go to position zero in my alphabet, and I grab the little a.

Again, I look for the z.

It's in position one.

There's my b in position one.

And then my q is going to be in position three or sorry, position two.

And it gives me my c.

As I said, I'm only using letters here, I'm not dealing with numbers or spaces.

You can be as creative as you want with that.
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    const std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "};
    const std::string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba|!£$%&/()ì"};

    std::cout << "Enter you secret message: ";
    std::string secret_user_message{};
    getline(std::cin, secret_user_message);
    for (std::size_t i{0}; i < secret_user_message.size(); ++i)
    {
        int id = alphabet.find(secret_user_message[i]);
        if (id != std::string::npos)
            secret_user_message[i] = key[id];
    }

    std::cout << "Encrypted message: " << secret_user_message << std::endl;
    std::cout << "Decrypt message..." << std::endl;
    for (std::size_t i{0}; i < secret_user_message.size(); ++i)
    {
        int id = key.find(secret_user_message[i]);
        if (id != std::string::npos)
            secret_user_message[i] = alphabet[id];
    }

    std::cout << "Decrypted message: " << secret_user_message << std::endl;
    return 0;
}