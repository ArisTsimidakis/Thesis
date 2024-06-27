class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            VAR6<String, String> VAR7 = new VAR6<String, String>();
            VAR7.FUN2(VAR8.VAR9,"");
            VAR7.FUN2(VAR8.VAR10, "VAR11:
            DirContext VAR12 = null;
    
            try
            {
                VAR12 = new FUN3(VAR7);
                
                String VAR13 = "" + VAR4 + "";
    
                VAR14<VAR15> VAR16 = VAR12.FUN4("", VAR13, null);
                while (VAR16.FUN5())
                {
                    SearchResult VAR17 = VAR16.next();
                    Attributes VAR18 = VAR17.FUN6();
                    VAR14<?> VAR19 = VAR18.FUN7();
                    while (VAR19.FUN5())
                    {
                        Attribute VAR20 = (VAR21) VAR19.next();
                        VAR14<?> VAR22 = VAR20.FUN7();
                        while(VAR22.FUN5())
                        {
                            VAR23.writeLine("" + VAR22.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR24)
            {
                VAR23.VAR25.log(VAR26.VAR27, "", VAR24);
            }
            finally
            {
                if (VAR12 != null)
                {
                    try
                    {
                        VAR12.close();
                    }
                    catch (NamingException VAR24)
                    {
                        VAR23.VAR25.log(VAR26.VAR27, "", VAR24);
                    }
                }
            }
    
        }
};