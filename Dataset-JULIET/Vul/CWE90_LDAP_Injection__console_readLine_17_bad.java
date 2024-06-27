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
            
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                VAR11<String, String> VAR12 = new VAR11<String, String>();
                VAR12.FUN2(VAR13.VAR14,"");
                VAR12.FUN2(VAR13.VAR15, "VAR16:
                DirContext VAR17 = null;
                try
                {
                    VAR17 = new FUN3(VAR12);
                    
                    String VAR18 = "" + VAR2 + "";
                    VAR19<VAR20> VAR21 = VAR17.FUN4("", VAR18, null);
                    while (VAR21.FUN5())
                    {
                        SearchResult VAR22 = VAR21.next();
                        Attributes VAR23 = VAR22.FUN6();
                        VAR19<?> VAR24 = VAR23.FUN7();
                        while (VAR24.FUN5())
                        {
                            Attribute VAR25 = (VAR26) VAR24.next();
                            VAR19<?> VAR27 = VAR25.FUN7();
                            while(VAR27.FUN5())
                            {
                                VAR6.writeLine("" + VAR27.next().FUN8());
                            }
                        }
                    }
                }
                catch (NamingException VAR28)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR28);
                }
                finally
                {
                    if (VAR17 != null)
                    {
                        try
                        {
                            VAR17.close();
                        }
                        catch (NamingException VAR28)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR28);
                        }
                    }
                }
            }
        }
};