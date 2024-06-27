class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Socket VAR3 = null;
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
                try
                {
                    
                    VAR3 = new Socket("", 39544);
    
                    
    
                    
                    VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR4 = new BufferedReader(VAR5);
    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            Container VAR11 = new FUN2();
            VAR11.VAR12 = VAR2;
            (new FUN3()).FUN4(VAR11  );
        }
};