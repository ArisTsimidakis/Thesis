class VAR1{
    public void FUN1() throws Throwable
        {
            if (FUN2())
            {
                byte[] VAR2 = "".getBytes("");
                byte[] VAR3 =
                {
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
                };
                KeyGenerator VAR4 = VAR5.FUN3("");
                VAR4.FUN4(128);
                SecretKey VAR6 = VAR4.FUN5();
                
                Cipher VAR7 = VAR8.FUN3("");
                IvParameterSpec VAR9 = new FUN6(VAR3);
                VAR7.FUN4(VAR8.VAR10, VAR6, VAR9);
                VAR11.writeLine(VAR11.FUN7(VAR7.FUN8(VAR2)));
            }
        }
};