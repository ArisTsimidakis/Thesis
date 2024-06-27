FUN1(enum ofputil_protocol VAR1)
{
    switch (VAR1) {
    case VAR2:
    case VAR3:
        return sizeof(struct VAR4);

    case VAR5:
    case VAR6:
        return VAR7;

    case VAR8:
        return sizeof(struct VAR9);

    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
        return VAR7;

    default:
        FUN2();
    }
}