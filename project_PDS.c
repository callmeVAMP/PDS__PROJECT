#include <stdio.h>
#include <string.h>
struct batsman_details{
    char name[100];
    int truns,tballs,fours,sixes;
    float sr;
}bt_A[11],bt_B[11];

struct bowler_details{
    char name[100];
    int g_runs,overs,wickets;
    float economy;
}bo_A[6],bo_B[6];

void teamA_bat(int nA){
    for(int i=0;i<nA;i++){
    printf("\nEnter name of batsman %d:" ,i+1);
    scanf("%s",&bt_A[i].name);

    printf("Enter the runs scored by Batsman %d: ",i+1);
    scanf("%d",&bt_A[i].truns);

    printf("Enter the total numbers of ball played by Batsman %d: ",i+1);
    scanf("%d",&bt_A[i].tballs);

    printf("Enter the total numbers of fours by Batsman %d: ",i+1);
    scanf("%d",&bt_A[i].fours);

    printf("Enter the total numbers of sixes by Batsman %d: ",i+1);
    scanf("%d",&bt_A[i].sixes);
    bt_A[i].sr=bt_A[i].truns/(float)bt_A[i].tballs*100;
    }
}
    

void teamB_bat(int nB){
    for(int i=0;i<nB;i++){
    printf("\nEnter name of batsman %d:" ,i+1);
    scanf("%s",&bt_B[i].name);

    printf("Enter the runs scored by Batsman %d: ",i+1);
    scanf("%d",&bt_B[i].truns);

    printf("Enter the total numbers of ball played by Batsman %d: ",i+1);
    scanf("%d",&bt_B[i].tballs);

    printf("Enter the total numbers of fours by Batsman %d: ",i+1);
    scanf("%d",&bt_B[i].fours);

    printf("Enter the total numbers of sixes by Batsman %d: ",i+1);
    scanf("%d",&bt_B[i].sixes);
    bt_B[i].sr=bt_B[i].truns/(float)bt_B[i].tballs*100;
    }
}


void teamA_bowl(int nA){
    for(int i=0;i<nA;i++){
    printf("\nEnter name of bowler %d:" ,i+1);
    scanf("%s",&bo_A[i].name);

    printf("Enter the runs given by the bowler %d: ",i+1);
    scanf("%d",&bo_A[i].g_runs);

    printf("Enter the overs balled by bowler %d: ",i+1);
    scanf("%d",&bo_A[i].overs);

    printf("Enter the wickets taken by bowler %d: ",i+1);
    scanf("%d",&bo_A[i].wickets);
    bo_A[i].economy=bo_A[i].g_runs/(float)bo_A[i].overs;
    printf("Thank you for entering the above details\n");}
}



void teamB_bowl(int nB){
    for(int i=0;i<nB;i++){
    printf("\nEnter name of bowler %d:" ,i+1);
    scanf("%s",&bo_B[i].name);

    printf("Enter the runs given by the bowler %d: ",i+1);
    scanf("%d",&bo_B[i].g_runs);

    printf("Enter the overs balled by bowler %d: ",i+1);
    scanf("%d",&bo_B[i].overs);

    printf("Enter the wickets taken by bowler %d: ",i+1);
    scanf("%d",&bo_B[i].wickets);
    bo_B[i].economy=bo_B[i].g_runs/(float)bo_B[i].overs;
    printf("Thank you for entering the above details\n");}
    }

int main(){
    
    char choice;
    int nA,nB,A,B,i,j;
    printf("enter the team which batted first:");
    scanf("%c",&choice);
    if(choice=='A'){
        printf("Enter no. of batsmen in team A:");
        scanf("%d",&nA);
        teamA_bat(nA);
        printf("\nEnter no. of bowlers in team B:");
        scanf("%d",&B);
        teamB_bowl(B);

        printf("\nFor next half of the match:");
        printf("\nEnter no. of batsmen in team B:");
        scanf("%d",&nB);
        teamB_bat(nB);
        printf("\nEnter no. of bowlers in team A:");
        scanf("%d",&A);
        teamA_bowl(A);
        printf("<div class=\"intro\">\n<h1 class=\"title\">CRICKET CHAMPIONSHIP</h1>\n<img src=\"cricket.png\" alt="" width=\"400px\"> <br />\n</div>");
        
//TEAM A BATTING
        printf("<section class=\"teama\">\n<h1 class=\"text\">TEAM A BATTING</h1>\n<div class=\"tbl-header\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<thead class=\"b1\">\n<tr class=\"b1\">\n<th>Sr. no.</th>\n<th>Batsman's Name</th>\n<th>Runs</th>\n<th>Balls</th>\n<th>Fours</th>\n<th>Sixes</th>\n<th>Strike Rate</th>\n</tr>\n</thead>\n</table>\n</div>\n");

  printf("<div class=\"tbl-content\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<tbody>\n");
       
        for(i=0;i<nA;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%0.2f</td></tr>",i+1,bt_A[i].name,bt_A[i].truns,bt_A[i].tballs,bt_A[i].fours,bt_A[i].sixes,bt_A[i].sr);
        }
        printf("</tbody>\n</table>\n</div>\n</section>\n");

//TEAM B BOWLING
        printf("<section class=\"teama\">\n");
        printf("<h1 class=\"text\">TEAM B BOWLING</h1>\n<div class=\"tbl-header\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<thead><tr>\n<th>Sr. no.</th>\n<th>Bowler's Name</th>\n<th>Runs</th>\n<th>Overs</th>\n<th>Wickets</th>\n<th>Economy</th>\n</tr>\n</thead>\n</table>\n</div>\n");


        printf("<div class=\"tbl-content\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><tbody>\n");
        
        for(i=0;i<B;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s</td>\n<td>%d</td>\n<td>%d</td>\n<td>%d</td>\n<td>%0.2f</td></tr>",i+1,bo_B[i].name,bo_B[i].g_runs,bo_A[i].overs,bo_B[i].wickets,bo_B[i].economy);
        }
        printf("</tbody>\n</table>\n</div>\n</section>\n");

//TEAM B BATTING
printf("<section class=\"teamb\">\n<h1 class=\"text\">TEAM B BATTING</h1><div class=\"tbl-header\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><thead><tr>\n<th class=\"b1\">Sr no.</th>\n<th class=\"b1\">Batsman's Name</th>\n<th class=\"b1\">Runs</th>\n<th class=\"b1\">Balls</th>\n<th class=\"b1\">Fours</th>\n<th class=\"b1\">Sixes</th>\n<th class=\"b1\">Strike Rate</th>\n</tr>\n</thead>\n</table>\n</div>\n<div class=\"tbl-content\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><tbody>");

        for(int i=0;i<nB;i++){
            printf("<tr>\n");
            printf("<td>%d</td></td><td>%s \n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%0.2f</td></tr>",i+1,bt_B[i].name,bt_B[i].truns,bt_B[i].tballs,bt_B[i].fours,bt_B[i].sixes,bt_B[i].sr);
        }
        printf("</tbody>\n</table>\n</div>\n</section>\n");

printf("<section class=\"teamb\">");

//TEAM A BOWLING
printf("<h1 class=\"text\">TEAM A BOWLING</h1><div class=\"tbl-header\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><thead>");
    printf("<tr>\n<th class=\"b1\">Sr no.</th>\n<th class=\"b1\">Bowler's Name</th>\n<th class=\"b1\">Runs</th>\n<th class=\"b1\">Overs</th>\n<th class=\"b1\">Wickets</th>\n<th class=\"b1\">Economy</th>\n</tr>\n</thead>\n</table>\n</div>\n<div class=\"tbl-content\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<tbody>\n");

        for(int i=0;i<A;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s</td>\n<td>%d</td>\n<td>%d</td>\n<td>%d</td>\n<td>%0.2f</td></tr>",i+1,bo_A[i].name,bo_A[i].g_runs,bo_A[i].overs,bo_A[i].wickets,bo_A[i].economy);
        }

        printf("</tbody>\n</table>\n</div>\n</section>\n");}

    else{
        printf("Enter no. of batsmen in team B:");
        scanf("%d",&nB);
        teamB_bat(nB);
        printf("\nEnter no. of bowlers in team A:");
        scanf("%d",&A);
        teamA_bowl(A);

        printf("\nFor next half of the match:");
        printf("\nEnter no. of batsmen in team A:");
        scanf("%d",&nA);
        teamA_bat(nA);
        printf("\nEnter no. of bowlers in team B:");
        scanf("%d",&B);
        teamB_bowl(B);

//TEAM B BATTING
        printf("<section class=\"teamb\">\n<h1 class=\"text\">TEAM B BATTING</h1><div class=\"tbl-header\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><thead><tr>\n<th class=\"b1\">Sr no.</th>\n<th class=\"b1\">Batsman's Name</th>\n<th class=\"b1\">Runs</th>\n<th class=\"b1\">Balls</th>\n<th class=\"b1\">Fours</th>\n<th class=\"b1\">Sixes</th>\n<th class=\"b1\">Strike Rate</th>\n</tr>\n</thead>\n</table>\n</div>\n<div class=\"tbl-content\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><tbody>");
printf("<div class=\"tbl-content\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<tbody>\n");
       
        for(i=0;i<nB;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%0.2f</td></tr>",i+1,bt_B[i].name,bt_B[i].truns,bt_B[i].tballs,bt_B[i].fours,bt_B[i].sixes,bt_B[i].sr);
        }
        printf("</tbody>\n</table>\n</div>\n</section>\n");

//TEAM A BOWLING
        printf("<section class=\"teama\">\n");
        printf("<h1 class=\"text\">TEAM A BOWLING</h1>\n<div class=\"tbl-header\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<thead><tr>\n<th>Sr. no.</th>\n<th>Bowler's Name</th>\n<th>Runs</th>\n<th>Overs</th>\n<th>Wickets</th>\n<th>Economy</th>\n</tr>\n</thead>\n</table>\n</div>\n");


        printf("<div class=\"tbl-content\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><tbody>\n");
        
        for(i=0;i<A;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s</td>\n<td>%d</td>\n<td>%d</td>\n<td>%d</td>\n<td>%0.2f</td></tr>",i+1,bo_A[i].name,bo_A[i].g_runs,bo_A[i].overs,bo_A[i].wickets,bo_A[i].economy);
        }
        printf("</tbody>\n</table>\n</div>\n</section>\n");

//TEAM A BATTING
printf("<section class=\"teama\">\n<h1 class=\"text\">TEAM A BATTING</h1>\n<div class=\"tbl-header\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<thead class=\"b1\">\n<tr class=\"b1\">\n<th>Sr. no.</th>\n<th>Batsman's Name</th>\n<th>Runs</th>\n<th>Balls</th>\n<th>Fours</th>\n<th>Sixes</th>\n<th>Strike Rate</th>\n</tr>\n</thead>\n</table>\n</div>\n");

  printf("<div class=\"tbl-content\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<tbody>\n");
       
        for(i=0;i<nA;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%d </td>\n<td>%0.2f</td></tr>",i+1,bt_A[i].name,bt_A[i].truns,bt_A[i].tballs,bt_A[i].fours,bt_A[i].sixes,bt_A[i].sr);
        }
        printf("</tbody>\n</table>\n</div>\n</section>\n");

//TEAM B BOWLING
printf("<h1 class=\"text\">TEAM B BOWLING</h1><div class=\"tbl-header\"><table cellpadding=\"0\" cellspacing=\"0\" border=\"0\"><thead>");
    printf("<tr>\n<th class=\"b1\">Sr no.</th>\n<th class=\"b1\">Bowler's Name</th>\n<th class=\"b1\">Runs</th>\n<th class=\"b1\">Overs</th>\n<th class=\"b1\">Wickets</th>\n<th class=\"b1\">Economy</th>\n</tr>\n</thead>\n</table>\n</div>\n<div class=\"tbl-content\">\n<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\n<tbody>\n");

        for(int i=0;i<B;i++){
            printf("<tr>\n");
            printf("<td>%d</td>\n<td>%s</td>\n<td>%d</td>\n<td>%d</td>\n<td>%d</td>\n<td>%0.2f</td></tr>",i+1,bo_B[i].name,bo_B[i].g_runs,bo_B[i].overs,bo_B[i].wickets,bo_B[i].economy);
        }

        printf("</tbody>\n</table>\n</div>\n</section>\n");
}
//Calculation of strike rate
    for(int i=0,j=0;i<A,j<B;i++,j++){
        bt_A[i].sr=(bt_A[i].truns/(float)bt_A[i].tballs)*100;

        bt_B[j].sr=(bt_B[j].truns/(float)bt_B[j].tballs)*100;
    }

    //Calculation of economy
    for(int i=0,j=0;i<nA,j<nB;i++,j++){
        bo_A[i].economy=bo_A[i].g_runs/(float)bo_A[i].overs;

        bo_B[j].economy=bo_B[j].g_runs/(float)bo_B[j].overs;
    }
    
    //Calculation 
    int max_runs_A=0,max_wickets_A=0,truns_A=0;
    int max_runs_B=0,max_wickets_B=0,truns_B=0;
    int ir_A,iw_A,ir_B,iw_B;
    
    for(int i=0,j=0;i<A,j<B;i++,j++){
        if(max_runs_A<bt_A[i].truns){
            max_runs_A=bt_A[i].truns; 
            ir_A=i;}

        truns_A+=bt_A[i].truns;

        if(max_runs_B<bt_B[j].truns){
            max_runs_B=bt_B[j].truns;
            ir_B=j;}   
        
        truns_B+=bt_B[i].truns;            
    }

    for(int i=0,j=0;i<nA,j<nB;i++,j++){
        if(max_wickets_A<bo_A[i].wickets){
            max_wickets_A=bo_A[i].wickets ; 
            iw_A=i;}      

        if(max_wickets_B<bo_B[j].wickets){
            max_wickets_B=bo_B[j].wickets ;
            iw_B=j;}     
    }

    printf("<div class=\"card1\"\nstyle=\"width: 18rem;\">\n<img src=\"https://img.freepik.com/premium-vector/realistic-golden-trophy-with-gold-laurel-wreath_48799-144.jpg?w=2000\"\n ");
    printf(" class=\"card-img-top\" alt=\"...\" width=\"100px\">\n");
    if(truns_A>truns_B){
    printf("<div class=\"card-body\">\n<h3 class=\"card-title\">WINNER</h3>\n<p class=\"card-text\">\n<h4>Team name-Team A</h4>\n<h3>Total score-%d</h3>\n</p>\n",truns_A);}
    else{
    printf("<div class=\"card-body\">\n<h3 class=\"card-title\">WINNER</h3>\n<p class=\"card-text\">\n<h4>Team name-Team B</h4>\n<h3>Total score-%d</h3>\n</p>\n",truns_B);}
    printf("</div>\n</div>\n");
    printf("<div class=\"card2\" style=\"width: 18rem;\">\n<img src=\"https://m.media-amazon.com/images/I/41dG6IA89aL.jpg\" class=\"card-img-top\" alt=\"...\" width=\"100px\">\n<div class=\"card-body\">\n");
    printf("<h3 class=\"card-title\">ORANGE CAP</h3>\n");
    if(max_runs_A>max_runs_B){
    printf("<p class=\"card-text\">\n<h4>Player name -%s</h4>\n<h3>Total score-%d</h3></p>",bt_A[ir_A].name,bt_A[ir_A].truns);}
    else{
    printf("<p class=\"card-text\">\n<h4>Player name -%s</h4>\n<h3>Total score-%d</h3></p>",bt_B[ir_B].name,bt_B[ir_B].truns);}
    printf("</div>\n</div>\n");
    printf("<div class=\"card3\" style=\"width: 18rem;\">\n<img src=\"https://image.made-in-china.com/44f3j00OvlacWRGaPue/Sportswear-Hat-Wholesales-Fashion-Design-Unisex-Purple-Caps-GST-CAP-XN01-2-.jpg\" class=\"card-img-top\" alt=\"...\" width=\"40px\">");
    if(max_wickets_A>max_wickets_B){
    printf("<div class=\"card-body\">\n<h3 class=\"card-title\">PURPLE CAP</h3>\n<p class=\"card-text\">\n<h4>Player name -%s</h4>\n<h3>Wickets taken-%d</h3>\n</p>\n</div>\n</div>",bo_A[iw_A].name,bo_A[iw_A].wickets);}
    else{
    printf("<div class=\"card-body\">\n<h3 class=\"card-title\">PURPLE CAP</h3>\n<p class=\"card-text\">\n<h4>Player name -%s</h4>\n<h3>Wickets taken-%d</h3>\n</p>\n</div>\n</div>",bo_B[iw_B].name,bo_B[iw_B].wickets);}
}
