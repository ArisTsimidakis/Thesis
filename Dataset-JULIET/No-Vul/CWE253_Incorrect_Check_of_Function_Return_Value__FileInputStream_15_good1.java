class VAR1{
    private void FUN1() throws Throwable
        {
            switch (8)
            {
            case 7:
                
                VAR2.writeLine("");
                break;
            default:
                FileInputStream VAR3 = null;
                try
                {
                    int VAR4 = 1024;
                    byte[] VAR5 = new byte[VAR4];
                    VAR3 = new FileInputStream("");
                    int VAR6 = VAR3.read(VAR5);
                    
                    if (VAR6 == -1)
                    {
                        VAR2.writeLine("");
                    }
                    else
                    {
                        if (VAR6 < VAR4)
                        {
                            VAR2.writeLine("" + VAR4 + "");
                        }
                        else
                        {
                            VAR2.writeLine(new String(VAR5, ""));
                        }
                    }
                }
                catch (FileNotFoundException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                catch (IOException VAR11)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR11);
                    }
                }
                break;
            }
        }
};