; Shim for PhysX 3.2.4 static libs built with older MSVC (type_info::name(__type_info_node*)).
.686P
.MODEL FLAT
EXTERN ?name@type_info@@QBEPBDXZ:PROC
PUBLIC ?name@type_info@@QBEPBDPAU__type_info_node@@@Z
.CODE
?name@type_info@@QBEPBDPAU__type_info_node@@@Z PROC
    call ?name@type_info@@QBEPBDXZ
    ret 4
?name@type_info@@QBEPBDPAU__type_info_node@@@Z ENDP
END
