control blanc c++ :


exercice 1:


1. Déterminez le résultat affiché par ce programme
   15 20


   
2. Expliquez la différence entre le passage par valeur et le passage par référence.
   Passage par valeur : La fonction reçoit une copie de la valeur de l'argument. Toute modification de ce paramètre à l'intérieur de la fonction
   n'affecte pas la variable originale de l'appelant.

  Passage par référence : La fonction reçoit un alias (une référence) vers la variable originale. 
  Les modifications apportées au paramètre à l'intérieur de la fonction modifient directement la variable originale de l'appelant.


  3. Modifiez la fonction modifier() pour que les deux variables soient modifiées.

     void modifier(int &a, int &b) {
          a += 5;
          b += 10;
      }

  4. Expliquez le rôle de l'opérateur & dans la déclaration des paramètres. 
L'opérateur & indique que ce paramètre est passé par référence.
Cela signifie que la fonction ne crée pas de copie, mais utilise directement l'adresse mémoire de la variable passée en argument,
permettant ainsi de la modifier.




exercice2 :


<img width="460" height="137" alt="cont-2" src="https://github.com/user-attachments/assets/5ed3e710-a110-48a9-9ea4-7cef848334c2" />


exercice3:


<img width="499" height="89" alt="con-3" src="https://github.com/user-attachments/assets/75421088-b281-492d-b5f1-5f91b05d50d2" />

