class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (5 == 5)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR3 = new Properties();
                    FileInputStream VAR4 = null;
                    try
                    {
                        VAR4 = new FileInputStream("");
                        VAR3.FUN2(VAR4);
                        
                        VAR2 = VAR3.FUN3("");
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
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR10<String, String> VAR11 = new VAR10<String, String>();
            VAR11.FUN4(VAR12.VAR13,"");
            VAR11.FUN4(VAR12.VAR14, "VAR15:
            DirContext VAR16 = null;
    
            try
            {
                VAR16 = new FUN5(VAR11);
                
                String VAR17 = "" + VAR2 + "";
    
                VAR18<VAR19> VAR20 = VAR16.FUN6("", VAR17, null);
                while (VAR20.FUN7())
                {
                    SearchResult VAR21 = VAR20.next();
                    Attributes VAR22 = VAR21.FUN8();
                    VAR18<?> VAR23 = VAR22.FUN9();
                    while (VAR23.FUN7())
                    {
                        Attribute VAR24 = (VAR25) VAR23.next();
                        VAR18<?> VAR26 = VAR24.FUN9();
                        while(VAR26.FUN7())
                        {
                            VAR6.writeLine("" + VAR26.next().FUN10());
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