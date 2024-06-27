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
            
    
            LinkedList<String> VAR10 = new LinkedList<String>();
            VAR10.add(0, VAR2);
            VAR10.add(1, VAR2);
            VAR10.add(2, VAR2);
            (new FUN2()).FUN3(VAR10  );
        }
};