#include <stdio.h>
int main(){

  int i;
  char gen;
  printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~````````````````````````````~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
  printf("\n                                   C  KENDARAYA                             ");
  printf("\n                     Obage upan kalaya anuva obage anagathaya                ");
  printf("\n\n\nEnter the your birth year: ");
  scanf(" %d",&i);
  i=2022-i;
  
	printf("Gender m 0r f : ");
  	scanf(" %c", &gen);
  	 printf("\n\n ");
  	
	  if(i>=0&&i<=10){
	 		switch(gen){
			 
    	       case 'm':
			   printf("avanka,thanpath gathiguna athi,darmika adahas atha,an ayage kerthi prasansavata lakve,yahapath mithuran athive,kathaven dakshave,yahapath puthrayan ve,sapa sampath athive.lajja baya atha,anayata priyave.budimath bavakin yuthuve,mana lesa vatahena nuvanak athive,onama vishayak therum ganimata hakiyava athive, kathavapahadiliya,visthra athiva yamak pahadili kirimata samathve,thma vatha pirisiduva kramanukulava thaba gani mata uthsaha karai,aunukampava atha, ikamankari bava,vada athapasu kara ganima ,athma vishvasaya adubava duravalakamaya, sharira shakthiya duravala bava amashaya roga sadimata ida kada atha. ");
				break;	
	
				case 'f':
			   printf("nihathamanaya,agamata dahamata ladiya,an ayage adaraya karunava labai,iganimata boho ladi bavak dakvai.nadayo udau karai,budimath bavakin uthuve,mana lesa vatahena nuvanak athive,onama vishayak therum ganimata hakiyava athive,kathava,pahadiliya,visthra athiva yamak pahadili kirimata samathve,thamage deval anayata demata kamathive,gruha jevithaya gana sala kilimathve,thma vata pirisiduva kramanukulava thaba gani mata uthsaha karai,aunukampava atha,vada athapasu kara ganima athma vishvasaya adubava duravalakamaya,sharira shakthiya duravala bava sem roga nithramaroga athive.");
				break;
				
				default: 
				 printf("try agian");	}
}
	else if(i>=11&&i<=20){
		switch(gen) {
			
    	       case 'm':
			   printf("kadavasam penumathiya,ivasilivanthaya,priya vachana kiyai,pirisidu sithak atha,punya garukaya,kelehiguna dani,sthrin asurata priyakarai,uthsahavanthya,unanduven kriya karai,ann ayge adahas valaata garukarai,vinodayata bara deval karai,darmanukulave,paralova pilibada sithai,dimata kamathive,kadisaraya,adika anukampava,anunata udaukirimata gose thamata padu sidukara ganima,porondu vishvasa kirima,athma varnanavata kamathiya,le dosha thathvaya athive,dahaya vadive,semroga pahasuven athive  ");
				break;	
	
				case 'f':
			   printf("yahapath gathiguna atha,budthimathya,sapavath jevitha gatha karai.rumathya, thejavanthaya,criyashilive,shariraya ushnadikai,onama amaru vadak kirimata idiri pathve,yukthiyata garu karai,kirthi prasansa laba gani mata kamathya,thama mathaya ismathu kirimata balai,yukthi garukave, athma varnanavata kamathiya,kathaven jaya ganimata nohakinam satanin ho jayaganimata pelabe,ivasilivanthakama aduve,sithehi nithara venasvana haki svabavayak atha,dahaya vadive,semroga pahasuven athive .");
				break;
				
				default: 
				 printf("try agian");	}	
}

  		
	else if(i>=21&&i<=35){
		switch(gen) {
		
    	       case 'm':
			   printf("kadavasam sirurakin uthuve,nirbithaya,kalahakariya,kriya shiliya,garu nambu labai.danavath sapa vidi,asuru karana ayge adahas valaata garukarai,vinodayata bara deval karai,darmanukulave,paralova pilibada sithai,dimata kamathive,kadisaraya,adika anukampava,anunata udaukirimata gose thamata padu sidukara ganima,porondu vishvasa kirima durvala karai,athmarthakami viya haka,,nikarune kalaya gevai. ");
				break;	
	
				case 'f':
			   printf("asuru karana ayge adahas valaata garukarai,tharamak napuruya,ekathana katauthu kirimara kamathi natha,samaja seva katauthuvala sahabagive,videsha gathavimata varam atha ,sangithyata itha priya kari,darmanukulave,paralova pilibada sithai,kisi vitakath masuru nove,kadisaraya,adika anukampava,anunata udaukirimata gose thamata padu sidukara ganima,porondu vishvasa kirima ,nitharama antharjalaya samaja madyavala hidimata kamathi,viyapara katauthu valata sudusu aya vethi,yahapath sithuvili atha,sandi roga valadiya haka.pahasuven mulavata pathve,sathuru pida atha.");
				break;

				default: 
				 printf("try agian");	}

}

	else if (i>=36&&i<=50){
		switch(gen){
		
    	       case 'm':
			   printf("pararthakamiya,sngithyata priyave,nadayo garu nambulabai,pirisakata nayakave,ralu vegavath kathava atha.asuru karana ayge adahas valaata garukarai,vinodayata bara deval karai,darmanukulave,paralova pilibada sithai,dimata kamathive,kadisaraya,adika anukampava,anunata udaukirimata gose thamata padu sidukara ganima,porondu vishvasa kirimabagyavantha anunta upakara karaianyange adahasvalata garu karai,oun samaga suhadava katauthu karai,asaranayanata udukarai,jalayata kamathive.semroga pisnasa adiyata goduru viya haka.");
				break;	
	
				case 'f':
			   printf("yahapath gathiguna atha,lipi lekanavala yede,arapiri masmen katayuthu karai,ahara pana adum paladum kerehi vadi salakilak dakvai.asuru karana ayge adahas valaata garukarai,darmanukulave ,paralova pilibada sithai,masuru nove,kadisaraya,adika anukampava,anunata udaukirimata gose thamata padu sidukara ganima,porondu vishvasa kirima,danahis ha sandi amaru nitharama pavathi.");
				break;
  
				default: 
				 printf("try agian");	}



}
	

	printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~_______________^_____________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	
return 0;
}



