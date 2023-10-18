# ExoPolymorphisme
## Sujet
Un `Garagiste` doit controler une `Moto`, une `Voiture` et un `Camion`.  
Ensuite, il va analyser le coffre du `Camion` et celui d'une `Carvane`.
### Contribuer
**Ne rien pousser sur la branche principale directement.**  
Créer une autre branche et faire une merge request en mettant en reviewer quand l'exercice est résolu.
### Etape 1
La fonction **main** doit appeler `Garagiste.controleVehicule` (camelCase) qui doit afficher les informations suivantes pour une `Moto` et une `Voiture`:
```
Classe vehicule: [Voiture, Moto, Camion]
Poids: [Leger, Moyen, Lourd]
Nombre de roues: XXX
Facture: ['pas cher', 'cher', 'tu vas halass']
```
Le nombre de roues de chaque véhicule doit être un _integer_ et le reste des _string_.  
La facture du controle va dépendre du poids du véhicule.  
A la fin du controle, le `Garagiste` va mettre l'attribut **privé** _etat_controle_ de chaque véhicule a _true_ (_false_ lors de l'initialisation).
### Etape 2
Un `Camion` est ajouté aux véhicules à contrôler.  
Avec la `Voiture`, lorsque leur attribut _etat_controle_ est modifié, le message suivant doit être affiché:
```
Etat controle [Voiture, Camion] mis à [true, false].
```
De plus, la fonction **main** doit appeler `Garagiste.analyseTransporteur` qui doit afficher les informations suivantes pour un `Camion` et une `Caravane`:
```
Dimensions du coffre: XXX x XXX
Présence d'immigrés: [true, false]
De toute façon, je fais pas la douane!
```
### Etape 3
Si le `Transporteur` a déjà été controlé auparavant, le `Garagiste.analyseTransporteur` affiche alors:
```
On va  lui faire un tarif quand même
```
Enfin, la méthode `Garagiste.controleVehicule` doit être modifiée afin d'afficher un message selon le poids du véhicule contrôlé:
```
Leger -> 'Ce soir c'est kebab'
Moyen -> 'J'irais pas au Sofitel mais ça me va'
Lourd -> 'Allez ça part à bamaco'
```
