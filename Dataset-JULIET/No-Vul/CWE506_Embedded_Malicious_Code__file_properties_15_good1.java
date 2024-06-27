class VAR1{
    private void FUN1() throws Throwable
        {
            switch (8)
            {
            case 7:
                
                VAR2.writeLine("");
                break;
            default:
                FileOutputStream VAR3 = null;
                try
                {
                    String VAR4 = "";
                    File VAR5 = new File(VAR4);
                    VAR3 = new FileOutputStream(VAR5);
                    VAR3.write("".getBytes(""));
                    
                }
                catch (IOException VAR6)
                {
                    VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
                break;
            }
        }
};