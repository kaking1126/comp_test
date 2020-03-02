    /* lab 1 C: please fix the program */
    #include <stdio.h>
    #include <string.h>
    int main(int argc, char *argv[])
    {
     int num_subj;
     float in_gp, sum_gp = 0.0;
     char in_grade;
     int i;
     int valid_subj = argc -1;
     /* argv[0] is the name of the program */
     num_subj = argc-1;
     //currentsystem
     printf("CurrentSystem:\n");
     for (i = 1; i <= num_subj; i++) {
     in_grade = argv[i][0]; /* get first character */
     switch (in_grade) {
         case 'A': in_gp = 4.0; break;
         case 'B': in_gp = 3.0; break;
         case 'C': in_gp = 2.0; break;
         case 'D': in_gp = 1.0; break;
         case 'F': in_gp = 0.0; break;
         default: printf("Wrong grade %s\n", argv[i]);
     }
     if (argv[i][1] == '+') { //current '+' value in gpa
         in_gp = in_gp + 0.5;
         printf("Grade for subject %d is %s, GP %2.1f\n", i, argv[i], in_gp);
         sum_gp = sum_gp + in_gp;
     }
     else if(argv[i][1] == '-'){ //current '-' value in gpa
         printf("Grade for subject %d is %s, GP %s\n", i, argv[i], "invalid");
         valid_subj--;
     }
     else{  //just letter grade value in gpa
         printf("Grade for subject %d is %s, GP %2.1f\n", i, argv[i], in_gp);
         sum_gp = sum_gp + in_gp;
     }
     }
     printf("Your GP for %d subjects is %2.2f\n", valid_subj, sum_gp/valid_subj);

    //future system
    float sum_gp_f = 0.0;
    int valid_subj_f = argc -1;
    printf("FutureSystem:\n");
        for (i = 1; i <= num_subj; i++) {
        in_grade = argv[i][0]; /* get first character */
        switch (in_grade) {
        case 'A': in_gp = 4.0; break;
        case 'B': in_gp = 3.0; break;
        case 'C': in_gp = 2.0; break;
        case 'D': in_gp = 1.0; break;
        case 'F': in_gp = 0.0; break;
        default: printf("Wrong grade %s\n", argv[i]);
    }
    if (in_grade != 'D'){         //consider non 'D' casees   
        if (argv[i][1] == '+') {  //'+' value in future system
            in_gp = in_gp + 0.3;
            printf("Grade for subject %d is %s, GP %2.1f\n", i, argv[i], in_gp);
            sum_gp_f = sum_gp_f + in_gp;
        }else if (argv[i][1] == '-') {  //'-' value in future system
            in_gp = in_gp - 0.3;
            printf("Grade for subject %d is %s, GP %2.1f\n", i, argv[i], in_gp);
            sum_gp_f = sum_gp_f + in_gp;
        }else {            //letter grade value in future system
            printf("Grade for subject %d is %s, GP %2.1f\n", i, argv[i], in_gp);
            sum_gp_f = sum_gp_f + in_gp;
        }       
    }else if(argv[i][1] == '+' || argv[i][1] == '-'){      //invalide case of D+ and D-   
        printf("Grade for subject %d is %s, GP %s\n", i, argv[i], "invalid");
        valid_subj_f--;
        }else{ //case of the remaining letter grade 
            printf("Grade for subject %d is %s, GP %2.1f\n", i, argv[i], in_gp);
            sum_gp_f = sum_gp_f + in_gp;
        }
    }
    printf("Your GPA for %d subjects is %2.2f\n", valid_subj_f, sum_gp_f/valid_subj_f);
}