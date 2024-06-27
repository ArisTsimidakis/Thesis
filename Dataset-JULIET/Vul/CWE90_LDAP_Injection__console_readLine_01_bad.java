class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            {
                InputStreamReader VAR3 = null;
                BufferedReader VAR4 = null;
    
                
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR3);
    
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
            
    
            VAR10<String, String> VAR11 = new VAR10<String, String>();
            VAR11.FUN2(VAR12.VAR13,"");
            VAR11.FUN2(VAR12.VAR14, "VAR15:
            DirContext VAR16 = null;
    
            try
            {
                VAR16 = new FUN3(VAR11);
                
                String VAR17 = "" + VAR2 + "";
    
                VAR18<VAR19> VAR20 = VAR16.FUN4("", VAR17, null);
                while (VAR20.FUN5())
                {
                    SearchResult VAR21 = VAR20.next();
                    Attributes VAR22 = VAR21.FUN6();
                    VAR18<?> VAR23 = VAR22.FUN7();
                    while (VAR23.FUN5())
                    {
                        Attribute VAR24 = (VAR25) VAR23.next();
                        VAR18<?> VAR26 = VAR24.FUN7();
                        while(VAR26.FUN5())
                        {
                            VAR6.writeLine("" + VAR26.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR27)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR27);
            }
            finally
            {
                if (VAR16 != null)
                {
                    try
                    {
                        VAR16.close();
                    }
                    catch (NamingException VAR27)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR27);
                    }
                }
            }
    
        }
};