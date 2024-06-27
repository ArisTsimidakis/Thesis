class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
    
            VAR3<String, String> VAR4 = new VAR3<String, String>();
            VAR4.FUN2(VAR5.VAR6,"");
            VAR4.FUN2(VAR5.VAR7, "VAR8:
            DirContext VAR9 = null;
    
            try
            {
                VAR9 = new FUN3(VAR4);
                
                String VAR10 = "" + VAR2 + "";
    
                VAR11<VAR12> VAR13 = VAR9.FUN4("", VAR10, null);
                while (VAR13.FUN5())
                {
                    SearchResult VAR14 = VAR13.next();
                    Attributes VAR15 = VAR14.FUN6();
                    VAR11<?> VAR16 = VAR15.FUN7();
                    while (VAR16.FUN5())
                    {
                        Attribute VAR17 = (VAR18) VAR16.next();
                        VAR11<?> VAR19 = VAR17.FUN7();
                        while(VAR19.FUN5())
                        {
                            VAR20.writeLine("" + VAR19.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR21)
            {
                VAR20.VAR22.log(VAR23.VAR24, "", VAR21);
            }
            finally
            {
                if (VAR9 != null)
                {
                    try
                    {
                        VAR9.close();
                    }
                    catch (NamingException VAR21)
                    {
                        VAR20.VAR22.log(VAR23.VAR24, "", VAR21);
                    }
                }
            }
    
        }
};