class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            try
            {
                InputStreamReader VAR3 = new InputStreamReader(System.in, "");
                BufferedReader VAR4 = new BufferedReader(VAR3);
    
                
                VAR2 = VAR4.readLine();
            }
            catch (IOException VAR5)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
            }
            
    
            VAR10<String> VAR11 = new VAR10<String>(5);
            VAR11.add(0, VAR2);
            VAR11.add(1, VAR2);
            VAR11.add(2, VAR2);
            (new FUN2()).FUN3(VAR11  );
        }
};