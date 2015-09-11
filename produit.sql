drop table if exists lot;
drop table if exists produit;
drop table if exists pointDeVente;
drop table if exists typeP;
drop table if exists surType;
drop table if exists question;
drop table if exists choisir;
drop table if exists utilisateur;
drop table if exists QAO;
drop table if exists localite;



create table lot (
	no int,
	noUtilisateur int,
	noProd int,
	quantite int,
	prixUnitaire float,
	unite varchar(50),
	modeDeProduction varchar(50),
	dateDeRecolte date,
	nbJourConssomation int,
	primary key (no,noProd,noUtilisateur)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table utilisateur (
	noUtil int,
	nom varchar(50),
	prenom varchar(50),
	rue1 varchar(50),
	rue2 varchar(50),
	typeUtilisateur varchar (50),
	email varchar(50),
	mdp varchar(25),
	pseudo varchar(50),
	codePostal varchar(10),
	ville varchar(50),
	primary key (noUtil)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table QAO (
	noUtil int,
	noPDV int
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table produit (
	no int,
	typeProduit int,
	libelle varchar(50),
	primary key (no)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table pointDeVente (
	no int,
	libelle varchar (50),
	activite varchar (20),
	nom varchar (50),
	prenom varchar (50),
	tel varchar (20),
	email varchar (50),
	rue1 varchar (50),
	rue2 varchar (50),
	codePostal varchar(10),
	libelleCommune varchar(70),
	primary key (no)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table typeP (
	noType int,
	noRayon int,
	libelle varchar (50),
	primary key (noType,noRayon)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table surType (
	no int, 
	libelle varchar (50),
	primary key (no)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table localite (
	codeIncee varchar (10),
	nomCommune varchar (20),
	codePostal varchar (10),
	ville varchar (50)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table question (
	no int,
	libelle varchar (50),
	primary key (no)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

create table choisir (
	no int,
	libelle varchar (50),
	cleQuestion int, 
	cleUtilisateur int, 
	reponse varchar (50),
	primary key (no)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

alter table lot
add foreign key (noProd) references produit (no),
add foreign key (noUtilisateur) references utilisateur (noUtil);

alter table produit
add foreign key (typeProduit) references typeP (noType);

alter table typeP 
add foreign key (noRayon) references surType (no);

alter table question 
add foreign key (no) references choisir (no);

alter table choisir 
add foreign key (no) references utilisateur (noUtil);

alter table QAO 
add foreign key (noUtil) references utilisateur (noUtil),
add foreign key (noPDV) references pointDeVente (no);







































	
