# Blowfish
Implementé el algoritmo blowfish para aprender un poco de criptografía y para desencriptar unos archivos de un juego. Lo hice más que nada por puro aburrimiento porque con un 1% del tiempo que le invertí a esto, pude desencriptar los archivos del juego (The Escapists) usando python, pero bueno. Voy a tratar de hacer alguuna cosa más de cripto, fue divertido, quizá md5?, sha256? AES? no sé.
## Notas
Como siempre, esto es un pequeño boceto de lo que podría ser un algoritmo de encriptación; *NO DEBERÍA USARSE EN UN CONTEXTO SERIO DE SEGURIDAD*. Blowfish mismo hace mucho que no es recomendado, pero bueno.
Usa el modo ECB, el más simple y menos seguro pero bueno ya es bastante dificil de implementar (por lo menos para ser mi primera vez con criptografía), pasé un 80% del tiempo debuggeando. 
Está bien hecho en teoría, lo chequee con algunas implementaciones online y me daba lo mismo. La función de encriptar y desencriptar un archivo es dependiente de la endianess así que quizá da distinto por eso, creería que en realidad implementé el blowfish compatible pero me perdí un poco con ese tema ya.
Si alquien quiere usarlo, cambiarlo, robarlo, se puede hagan lo que quieran.
## Bibliografía
Un poco lo copié del pseudo de _"en.wikipedia.org"_ y lo que me faltó, lo aprendí de _"www.schneier.com"_. Los valores iniciales de P y S los saqué de la implementación de _"www.geeksforgeeks.org"_.
