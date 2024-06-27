class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                {
                    File VAR5 = new File("");
                    FileInputStream VAR6 = null;
                    InputStreamReader VAR7 = null;
                    BufferedReader VAR8 = null;
                    try
                    {
                        
                        VAR6 = new FileInputStream(VAR5);
                        VAR7 = new InputStreamReader(VAR6, "");
                        VAR8 = new BufferedReader(VAR7);
                        
                        
                        VAR2 = VAR8.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR13<String, String> VAR14 = new VAR13<String, String>();
            VAR14.FUN2(VAR15.VAR16,"");
            VAR14.FUN2(VAR15.VAR17, "VAR18:
            DirContext VAR19 = null;
    
            try
            {
                VAR19 = new FUN3(VAR14);
                
                String VAR20 = "" + VAR2 + "";
    
                VAR21<VAR22> VAR23 = VAR19.FUN4("", VAR20, null);
                while (VAR23.FUN5())
                {
                    SearchResult VAR24 = VAR23.next();
                    Attributes VAR25 = VAR24.FUN6();
                    VAR21<?> VAR26 = VAR25.FUN7();
                    while (VAR26.FUN5())
                    {
                        Attribute VAR27 = (VAR28) VAR26.next();
                        VAR21<?> VAR29 = VAR27.FUN7();
                        while(VAR29.FUN5())
                        {
                            VAR3.writeLine("" + VAR29.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR30)
            {
                VAR3.VAR10.log(VAR11.VAR12, "", VAR30);
            }
            finally
            {
                if (VAR19 != null)
                {
                    try
                    {
                        VAR19.close();
                    }
                    catch (NamingException VAR30)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR30);
                    }
                }
            }
    
        }
};