class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                byte[] VAR4 = "".getBytes("");
                KeyGenerator VAR5 = VAR6.FUN2("");
                VAR5.FUN3(128);
                SecretKey VAR7 = VAR5.FUN4();
                Cipher VAR8 = VAR9.FUN2("");
                int VAR10 = VAR8.FUN5();
                byte[] VAR11 = new byte[VAR10];
                SecureRandom VAR12 = new FUN6();
                VAR12.FUN7(VAR11);
                
                IvParameterSpec VAR13 = new FUN8(VAR11);
                VAR8.FUN3(VAR9.VAR14, VAR7, VAR13);
                VAR2.writeLine(VAR2.FUN9(VAR8.FUN10(VAR4)));
            }
        }
};