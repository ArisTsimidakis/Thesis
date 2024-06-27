class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            switch (6)
            {
            case 6:
                
                VAR2 = (new FUN2()).nextInt();
                break;
            default:
                
                VAR2 = 0;
                break;
            }
    
            switch (7)
            {
            case 7:
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR3 = new File("");
                    FileOutputStream VAR4 = new FileOutputStream(VAR3);
                    OutputStreamWriter VAR5 = new FUN3(VAR4, "");
                    BufferedWriter VAR6 = new BufferedWriter(VAR5);
                    int VAR7;
                    for (VAR7 = 0; VAR7 < VAR2; VAR7++)
                    {
                        try
                        {
                            VAR6.write("");
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                }
                break;
            default:
                
                VAR9.writeLine("");
                break;
            }
        }
};