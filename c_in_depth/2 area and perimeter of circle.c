void main()
{
    float rad,pii,area,permiter;
    printf("Enter radius:");
    scanf("%f",&rad);
    pii=3.14;
    area=pii*(rad*rad);
    permiter=2*pii*rad;

    printf("\narea=%f",area);
    printf("\nperimeter=%f",permiter);
}
