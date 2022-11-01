c

Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.

r

Insert the files member... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.

s

Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "ar s" on an archive is equivalent to running ranlib on it.