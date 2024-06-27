class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (true)
            {
                VAR2 = ""; 
                {
                    File VAR3 = new File("");
                    FileInputStream VAR4 = null;
                    InputStreamReader VAR5 = null;
                    BufferedReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new FileInputStream(VAR3);
                        VAR5 = new InputStreamReader(VAR4, "");
                        VAR6 = new BufferedReader(VAR5);
                        
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                    finally
                    {
                        
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
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR12<String, String> VAR13 = new VAR12<String, String>();
            VAR13.FUN2(VAR14.VAR15,"");
            VAR13.FUN2(VAR14.VAR16, "VAR17:
            DirContext VAR18 = null;
    
            try
            {
                VAR18 = new FUN3(VAR13);
                
                String VAR19 = "" + VAR2 + "";
    
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
};