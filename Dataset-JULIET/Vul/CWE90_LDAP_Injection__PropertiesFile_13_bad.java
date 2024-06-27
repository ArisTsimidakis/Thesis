class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4 == 5)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR5 = new Properties();
                    FileInputStream VAR6 = null;
                    try
                    {
                        VAR6 = new FileInputStream("");
                        VAR5.FUN2(VAR6);
                        
                        VAR2 = VAR5.FUN3("");
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR11<String, String> VAR12 = new VAR11<String, String>();
            VAR12.FUN4(VAR13.VAR14,"");
            VAR12.FUN4(VAR13.VAR15, "VAR16:
            DirContext VAR17 = null;
    
            try
            {
                VAR17 = new FUN5(VAR12);
                
                String VAR18 = "" + VAR2 + "";
    
                VAR19<VAR20> VAR21 = VAR17.FUN6("", VAR18, null);
                while (VAR21.FUN7())
                {
                    SearchResult VAR22 = VAR21.next();
                    Attributes VAR23 = VAR22.FUN8();
                    VAR19<?> VAR24 = VAR23.FUN9();
                    while (VAR24.FUN7())
                    {
                        Attribute VAR25 = (VAR26) VAR24.next();
                        VAR19<?> VAR27 = VAR25.FUN9();
                        while(VAR27.FUN7())
                        {
                            VAR3.writeLine("" + VAR27.next().FUN10());
                        }
                    }
                }
            }
            catch (NamingException VAR28)
            {
                VAR3.VAR8.log(VAR9.VAR10, "", VAR28);
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
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR28);
                    }
                }
            }
    
        }
};