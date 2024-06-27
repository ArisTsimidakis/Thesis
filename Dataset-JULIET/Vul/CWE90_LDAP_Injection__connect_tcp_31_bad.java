class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
    
                        
    
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
    
                        
                        VAR3 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                VAR12<String, String> VAR13 = new VAR12<String, String>();
                VAR13.FUN2(VAR14.VAR15,"");
                VAR13.FUN2(VAR14.VAR16, "VAR17:
                DirContext VAR18 = null;
    
                try
                {
                    VAR18 = new FUN3(VAR13);
                    
                    String VAR19 = "" + VAR3 + "";
    
                    VAR20<VAR21> VAR22 = VAR18.FUN4("", VAR19, null);
                    while (VAR22.FUN5())
                    {
                        SearchResult VAR23 = VAR22.next();
                        Attributes VAR24 = VAR23.FUN6();
                        VAR20<?> VAR25 = VAR24.FUN7();
                        while (VAR25.FUN5())
                        {
                            Attribute VAR26 = (VAR27) VAR25.next();
                            VAR20<?> VAR28 = VAR26.FUN7();
                            while(VAR28.FUN5())
                            {
                                VAR8.writeLine("" + VAR28.next().FUN8());
                            }
                        }
                    }
                }
                catch (NamingException VAR29)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR29);
                }
                finally
                {
                    if (VAR18 != null)
                    {
                        try
                        {
                            VAR18.close();
                        }
                        catch (NamingException VAR29)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR29);
                        }
                    }
                }
    
            }
        }
};