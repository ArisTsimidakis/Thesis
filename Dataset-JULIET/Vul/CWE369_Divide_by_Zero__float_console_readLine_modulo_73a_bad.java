class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            InputStreamReader VAR3 = null;
            BufferedReader VAR4 = null;
    
            
            try
            {
                VAR3 = new InputStreamReader(System.in, "");
                VAR4 = new BufferedReader(VAR3);
    
                
                String VAR5 = VAR4.readLine();
    
                if (VAR5 != null) 
                {
                    try
                    {
                        VAR2 = VAR6.FUN2(VAR5.trim());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
            catch (IOException VAR12)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
            }
    
            LinkedList<VAR6> VAR13 = new LinkedList<VAR6>();
            VAR13.add(0, VAR2);
            VAR13.add(1, VAR2);
            VAR13.add(2, VAR2);
            (new FUN3()).FUN4(VAR13  );
        }
};