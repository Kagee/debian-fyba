# ifdef FYBA_STRINGS_EN
/* =========== ENGLISH FYBA_STRINGS  ================== */

#define FYBA_STRING_BASE_UNKNOWN_TYPE    "Unknown base type, cannot open base."
#define FYBA_STRING_BASE_TOO_MANY_GROUPS "Too many groups in base."
#define FYBA_STRING_FILE_NOT_FOUND       "No .sos file found by the name:"
#define FYBA_STRING_BASE_FYBA_NOT_INITD  "Cannot open base - FYBA has not been initialized."
#define FYBA_STRING_BASE_NOT_OPEN        "Cannot open SOSI-file. Base has not been opened."
#define FYBA_STRING_FILE_OPEN_FAILED     "Error opening file:"
#define FYBA_STRING_FILE_OMRAADE_MISSING "..OMRÅDE missing in file header:"
#define FYBA_STRING_FILE_MIN_NOE_MISSING "...MIN-NØ missing in file header:"
#define FYBA_STRING_FILE_MAX_NOE_MISSING "...MAX-NØ missing in file header:"
#define FYBA_STRING_BASE_INDEX_ABORTED   "Index construction aborted."
#define FYBA_STRING_BASE_OPEN_FAILED     "Error opening:"
#define FYBA_STRING_FILE_NEW_HEADER      "New header in:"
#define FYBA_STRING_FILE_NOT_SOSI        "Not a SOSI file:"
#define FYBA_STRING_FILE_OMRAADE_INVALID "Invalid OMRÅDE in file header! (No dimensions.)"
#define FYBA_STRING_SAVE_INVALID_FILEPTR "Invalid file pointer while saving."
#define FYBA_STRING_OPEN_BASE_IS_KLADDE  "Cannot open SOSI file. Base was opened as KLADDE. This can only be combined with sequential reading/writing."
#define FYBA_STRING_FILE_READ_ERROR_HODE "Reading error in header line."
#define FYBA_STRING_FILE_TRANSPAR_MISSING "..TRANSPAR missing in file header."
#define FYBA_STRING_FILE_KOORDSYS_MISSING "...KOORDSYS missing in file header."
#define FYBA_STRING_FILE_ORIGO_MISSING   "...ORIGO-NØ missing in file header. (Check the encoding!)"
#define FYBA_STRING_FILE_ENHET_MISSING   "...ENHET missing in file header."
#define FYBA_STRING_NAME_TABLE_FULL      "Name table is full."
#define FYBA_STRING_INVALID_GROUP_NAME   "Invalid group name:"
#define FYBA_STRING_FILE_NO_CURRENT_GROUP "No current group - nothing read."
#define FYBA_STRING_OPEN_INVALID_EXTERN  "Invalid external file - nothing read."
#define FYBA_STRING_SAVE_INVALID_EXTERN  "Invalid external file - nothing written."
#define FYBA_STRING_SAVE_NO_WRITE_ACCESS "No write access, nothing written to the file:"
#define FYBA_STRING_GROUP_DELETED        "Group is deleted."
#define FYBA_STRING_FILE_INVALID_GROUP_NR "Invalid group number, nothing read."
#define FYBA_STRING_NEW_INVALID_FILE     "Invalid file, cannot create new group."
#define FYBA_STRING_NEW_NO_WRITE_ACCESS  "No write access, cannot create new group."
#define FYBA_STRING_NEW_TOO_MANY_GROUPS  "Too many groups in base, cannot create new group."
#define FYBA_STRING_NEW_INVALID_LINE_GI  "Invalid line number for new GINFO"
#define FYBA_STRING_NEW_INVALID_LINE_COO "Invalid line number for new coordinates."
#define FYBA_STRING_SLUTT_MISSING        ".SLUTT missing in SOSI file."
#define FYBA_STRING_READ_ERROR           "Error reading SOSI file."
#define FYBA_STRING_GROUP_REFERRED_TO    "Group is referenced by another group, cannot be deleted."
#define FYBA_STRING_INVALID_GI_LINE_1    "Invalid GINFO line nr. 1."
#define FYBA_STRING_CANT_REMOVE_HEADER   "You cannot remove the file header."
#define FYBA_STRING_NO_CURRENT_GROUP     "No current group, nothing changed."
#define FYBA_STRING_DEL_UNKNOWN_FLAG     "Group has an unknown NGIS change flag, cannot be removed."
#define FYBA_STRING_DEL_NO_WRITE_ACCESS  "No write access, group cannot be removed."
#define FYBA_STRING_ERR_FILESIZE_CHANGE  "Error changing file size."
#define FYBA_STRING_DISK_SOON_FULL       "Your disk is soon full. Make some room at : "
#define FYBA_STRING_NOT_A_HEADER         "Current group is not a file header - nothing changed."
#define FYBA_STRING_DEL_NOT_SEQUENTIAL   "You cannot delete groups in sequential mode."
#define FYBA_STRING_NO_CHANGE_HEADERS    "Cannot change KOORDSYS, ENHET, ORIGO or NGIS-LAG in a file with data."
#define FYBA_STRING_CANT_REWRITE_HEADER  "No room to write back header."
#define FYBA_STRING_SAVE_NOT_A_HEADER    "Group is not a header, cannot save it as such."
#define FYBA_STRING_CANT_COPY_COORD      "Cannot copy coordinates from current group to another."
#define FYBA_STRING_CANT_COPY_COORD_ROOM "Cannot copy coordinates: Not enough room in ring buffer."
#define FYBA_STRING_ENHET_NOT_SET        "ENHET is set to 0.0 in the file header, or header is missing:"
#define FYBA_STRING_CANT_READ_FILE_SIZE  "Error while retrieving file size:"
#define FYBA_STRING_PINFO_LONG_OR_NO_NOE "PINFO too long -OR- ..NØ missing after PINFO:"
#define FYBA_STRING_LOGIC_FAIL           "Logic error in SOSI-file\nLine order error, property among coordinates:\n"
#define FYBA_STRING_MAX_1_KP_OR_NO_NOE   "Max. 1 KP per point -OR- ..NØ missing after KP:"
#define FYBA_STRING_NO_ROOM_IN_HEADER    "No room in header or corrupt:"
#define FYBA_STRING_INVALID_GAP          "Invalid gap in point-indentation:"
#define FYBA_STRING_TOO_MANY_COORDINATES "Too many coordinates in group:"
#define FYBA_STRING_TOO_MANY_GINFO       "GINFO-line lost.  Too many GINFO lines in:"
#define FYBA_STRING_TOO_MUCH_GINFO       "GINFO-line lost.  Too much GINFO in:"
#define FYBA_STRING_TOO_MUCH_PINFO       "PINFO lost. Too much PINFO in:"
#define FYBA_STRING_CANT_EXTEND_GROUP    "Cannot extend group (too many coordinates):"
#define FYBA_STRING_READ_NO_WRITE_ACCESS "Cannot read new group. No write access to save current, changed group. File:"
#define FYBA_STRING_READ_LINE_TOO_LONG   "Cannot read SOSI file. Line too long: "
#define FYBA_STRING_INVALID_POINT        "Invalid point number:"
#define FYBA_STRING_INVALID_GINFO        "Invalid GINFO line number:"
#define FYBA_STRING_INVALID_NODE         "Invalid Node type:"
#define FYBA_STRING_INVALID_GROUP_NAME   "Invalid group name:"
#define FYBA_STRING_PINFO_TOO_LONG       "PINFO too long, cannot fetch value. (Contact support/developers)"
#define FYBA_STRING_INVALID_REF          "Invalid REF in file:"
#define FYBA_STRING_CANT_CHANGE_ENHET    "Cannot change ENHET in a file with data:"
#define FYBA_STRING_CANT_CHANGE_NGIS_LAG "Cannot change ..NGIS-LAG in a file with data:"
#define FYBA_STRING_INVALID_BUE          "Invalid curve (BUE) in file:"
#define FYBA_STRING_CANT_CHANGE_ORIGO_NOE "Cannot change ..ORIGO-NØ in a file with data:"
#define FYBA_STRING_PROB_TOO_LONG_PINFO  "PINFO (probably) too long."
#define FYBA_STRING_NO_HOEYDE_WITH_NAD   "Group has ..NAD, cannot store height per point:"
#define FYBA_STRING_NO_HOEYDE_WITH_NAH   "Group has ..NAH, cannot store depth per point: "
#define FYBA_STRING_LINE_TOO_LONG        "SOSI-line too long (max. 1024 characters), line stripped. Group: "
#define FYBA_STRING_INVALID_SERIAL       "Invalid serial number:"
#define FYBA_STRING_INVALID_LINE_NR      "Invalid line number in table to unpack info:" /* check */
#define FYBA_STRING_INVALID_GROUP_NR     "Invalid group number, identifier corrupt:"
#define FYBA_STRING_ERR_READING_BUFFER   "Error reading from ring buffer."
#define FYBA_STRING_ERR_WRITING_BUFFER   "Error writing to ring buffer."
#define FYBA_STRING_MUST_INIT_INDEX      "Must initialize index table before saving."
#define FYBA_STRING_ERR_READING_SEARCHT  "Error reading geographic search table."
#define FYBA_STRING_ERR_WRITING_SEARCHT  "Error writing geographic search table."
#define FYBA_STRING_ERR_READING_GROUPT   "Error reading group table."
#define FYBA_STRING_ERR_WRITING_GROUPT   "Error writing group table."
#define FYBA_STRING_ERR_READING_SERIALT  "Error reading serial number table."
#define FYBA_STRING_ERR_WRITING_SERIALT  "Error writing serial number table."
#define FYBA_STRING_ERR_READING_INFOT    "Error reading info table."
#define FYBA_STRING_ERR_WRITING_INFOT    "Error writing info table."
#define FYBA_STRING_ERR_INFOT_FULL       "Info storage table is full."
#define FYBA_STRING_ERR_READING_BRUKT    "Error reading 'brukt'-table." /* check */
#define FYBA_STRING_ERR_WRITING_BRUKT    "Error writing 'brukt'-table."
#define FYBA_STRING_NO_BLANKS_FILENAME   "Cannot create catalog for index files with spaces in file name.\n"
#define FYBA_STRING_TOO_MANY_CHOICES     "Too many selections, no room for:"
#define FYBA_STRING_MISPLACED_CHOICE     "Misplaced selection line:"
#define FYBA_STRING_GROUP_CHOICE_MISSING "Included group selection not found:"
#define FYBA_STRING_INVALID_CHOICE       "Invalid selection line:"
#define FYBA_STRING_NO_COMPLEX_CHOICE    "Complex selections (with OG or ELLER) do not work on PINFO."
#define FYBA_STRING_GAP_IN_LEVEL         "Invalid gap in indentation:"
#define FYBA_STRING_TOO_MANY_PRIORITIES  "Too many priorities, ignoring:"
#define FYBA_STRING_DUPLICATE_DEFINITION "Level is defined twice in:" /* check */
#define FYBA_STRING_UNKNOWN_ERROR        "Unknown error message. Nr.: %d"

# else 
/* =========== NORWEGIAN FYBA_STRINGS (DEFAULT) ======= */

#define FYBA_STRING_BASE_UNKNOWN_TYPE    "Ukjent BaseType er gitt, kan derfor ikke åpne base!"
#define FYBA_STRING_BASE_TOO_MANY_GROUPS "For mange grupper i basen:"
#define FYBA_STRING_FILE_NOT_FOUND       "Finner ingen .SOS fil med navnet:"
#define FYBA_STRING_BASE_FYBA_NOT_INITD  "Kan ikke åpne base, FYBA er ikke initiert!"
#define FYBA_STRING_BASE_NOT_OPEN        "Kan ikke åpne SOSI-fil, fordi det ikke er åpnet noen base!"
#define FYBA_STRING_FILE_OPEN_FAILED     "Åpningsfeil på filen:"
#define FYBA_STRING_FILE_OMRAADE_MISSING "..OMRÅDE mangler i filhodet på filen:"
#define FYBA_STRING_FILE_MIN_NOE_MISSING "...MIN-NØ mangler i filhodet på filen:"
#define FYBA_STRING_FILE_MAX_NOE_MISSING "...MAX-NØ mangler i filhodet på filen:"
#define FYBA_STRING_BASE_INDEX_ABORTED   "Indeksoppbygging er avbrutt!"
#define FYBA_STRING_BASE_OPEN_FAILED     "Åpningsfeil på:"
#define FYBA_STRING_FILE_NEW_HEADER      "Nytt hode på:"
#define FYBA_STRING_FILE_NOT_SOSI        "Ikke SOSI-fil:"
#define FYBA_STRING_FILE_OMRAADE_INVALID "Ulovlig OMRÅDE-angivelse i filhodet! (Ingen utstrekning.)"
#define FYBA_STRING_SAVE_INVALID_FILEPTR "Ulovlig filpeker ved kall til lagringssystemet, rutine"
#define FYBA_STRING_OPEN_BASE_IS_KLADDE  "Kan ikke åpne SOSI-fil. Basen er åpnet som kladdebase. Dette kan bare kombineres med sekvensiell les/skriv av SOSI-fil."
#define FYBA_STRING_FILE_READ_ERROR_HODE "Lesefeil ved lesing av hodelinje."
#define FYBA_STRING_FILE_TRANSPAR_MISSING "..TRANSPAR mangler i filhodet."
#define FYBA_STRING_FILE_KOORDSYS_MISSING "...KOORDSYS mangler i filhodet."
#define FYBA_STRING_FILE_ORIGO_MISSING   "...ORIGO-NØ mangler i filhodet. (Feil tegnsett?)"
#define FYBA_STRING_FILE_ENHET_MISSING   "...ENHET mangler i filhodet."
#define FYBA_STRING_NAME_TABLE_FULL      "Navnetabellen er full."
#define FYBA_STRING_INVALID_GROUP_NAME   "Ulovlig gruppenavn:"
#define FYBA_STRING_FILE_NO_CURRENT_GROUP "Ingen aktuell gruppe, ingenting er lest!"
#define FYBA_STRING_OPEN_INVALID_EXTERN  "Ulovlig ekstern fil, ingenting er lest!"
#define FYBA_STRING_SAVE_INVALID_EXTERN  "Ulovlig ekstern fil, ingenting er skrevet!"
#define FYBA_STRING_SAVE_NO_WRITE_ACCESS "Du har ikke skriveaksess, ingenting er skrevet til filen:"
#define FYBA_STRING_GROUP_DELETED         "Gruppen er sletta."
#define FYBA_STRING_FILE_INVALID_GROUP_NR "Ulovlig gruppenummer, ingenting er lest!"
#define FYBA_STRING_NEW_INVALID_FILE     "Ulovlig fil, kan ikke lage ny gruppe!"
#define FYBA_STRING_NEW_NO_WRITE_ACCESS  "Du har ikke skriveaksess, kan ikke lage ny gruppe!"
#define FYBA_STRING_NEW_TOO_MANY_GROUPS  "For mange grupper i basen, kan ikke lage ny gruppe:"
#define FYBA_STRING_NEW_INVALID_LINE_GI  "Ulovlig linjenummer for ny GINFO:"
#define FYBA_STRING_NEW_INVALID_LINE_COO "Ulovlig linjenummer for ny koordinat:"
#define FYBA_STRING_SLUTT_MISSING        ".SLUTT mangler på SOSI-filen"
#define FYBA_STRING_READ_ERROR           "Lesefeil på SOSI-filen"
#define FYBA_STRING_GROUP_REFERRED_TO    "Gruppen er referert fra annen gruppe, kan ikke slette gruppen!"
#define FYBA_STRING_INVALID_GI_LINE_1    "Ulovlig GINFO-linje nr 1:"
#define FYBA_STRING_CANT_REMOVE_HEADER   "Det er ikke mulig å slette filhodet!"
#define FYBA_STRING_NO_CURRENT_GROUP     "Det er ingen aktuell gruppe, ingenting er utført!"
#define FYBA_STRING_DEL_UNKNOWN_FLAG     "Gruppen har ukjent NGIS endringsflagg, kan ikke slette gruppen!"
#define FYBA_STRING_DEL_NO_WRITE_ACCESS  "Du har ikke skriveaksess, kan ikke slette gruppen!"
#define FYBA_STRING_ERR_FILESIZE_CHANGE  "Feil ved endring av filstørrelse!"
#define FYBA_STRING_DISK_SOON_FULL       "Disken er snart full. Rydd plass til : "
#define FYBA_STRING_NOT_A_HEADER         "Aktuell gruppe er ikke SOSI-filhode, ingenting er utført"
#define FYBA_STRING_DEL_NOT_SEQUENTIAL   "Det er ikke mulig å slette gruppe på sekvensiell fil!"
#define FYBA_STRING_NO_CHANGE_HEADERS    "Kan ikke endre KOORDSYS, ENHET, ORIGO eller NGIS-LAG på fil med data!"
#define FYBA_STRING_CANT_REWRITE_HEADER  "Det er ikke plass til å skrive tilbake filhodet!"
#define FYBA_STRING_SAVE_NOT_A_HEADER    "Gruppen er ikke filhode, kan ikke lagre den som filhode!"
#define FYBA_STRING_CANT_COPY_COORD      "Kan ikke kopiere koord. fra akt. gruppe til akt.gruppe!"
#define FYBA_STRING_CANT_COPY_COORD_ROOM "Kan ikke kopiere koordinater:  (ikke nok plass i ringbuffer)!"
#define FYBA_STRING_ENHET_NOT_SET        "ENHET er 0.0 i filhodet, eller filhode mangler på filen:"
#define FYBA_STRING_CANT_READ_FILE_SIZE  "Feil ved hent av filstørrelse på filen:"
#define FYBA_STRING_PINFO_LONG_OR_NO_NOE "For lang PINFO / ..NØ mangler etter PINFO! :"
#define FYBA_STRING_LOGIC_FAIL           "Logisk feil i SOSI-fil.\nNivåfeil, egenskap mellom koordinatene:\n"
#define FYBA_STRING_MAX_1_KP_OR_NO_NOE   "Max. 1 KP pr. punkt / ..NØ mangler etter KP! :"
#define FYBA_STRING_NO_ROOM_IN_HEADER    "Ikke plass til hodet, ødelagt på filen :"
#define FYBA_STRING_INVALID_GAP          "Ulovlig sprang i prikk-nivå!:"
#define FYBA_STRING_TOO_MANY_COORDINATES "For mange koordinater i gruppe:"
#define FYBA_STRING_TOO_MANY_GINFO       "GINFO-linje mistes!  For mange GINFO linjer i:"
#define FYBA_STRING_TOO_MUCH_GINFO       "GINFO-linje mistes!  For mye GINFO i:"
#define FYBA_STRING_TOO_MUCH_PINFO       "PINFO mistes!  For mye PINFO i:"
#define FYBA_STRING_CANT_EXTEND_GROUP    "Kan ikke utvide gruppe (for mange koordinater):"
#define FYBA_STRING_READ_NO_WRITE_ACCESS "Kan ikke lese ny gruppe. Du har ikke skriveaksess for å lagre aktuell gruppe som er endret. Fil :"
#define FYBA_STRING_READ_LINE_TOO_LONG   "Kan ikke lese SOSI-fil. For lang SOSI-linje: "
#define FYBA_STRING_INVALID_POINT        "Ulovlig punktnummer:"
#define FYBA_STRING_INVALID_GINFO        "Ulovlig GINFO-linje nummer:"
#define FYBA_STRING_INVALID_NODE         "Ulovlig Knutepunkt-type:"
#define FYBA_STRING_INVALID_GROUP_NAME   "Ulovlig gruppenavn:"
#define FYBA_STRING_PINFO_TOO_LONG       "For lang PINFO, klarer ikke å hente verdi. (Kontakt FYSAK-support)"
#define FYBA_STRING_INVALID_REF          "OBS! Ulovlig ref. i filen:"
#define FYBA_STRING_CANT_CHANGE_ENHET    "Kan ikke endre ENHET på fil med data, bruker:"
#define FYBA_STRING_CANT_CHANGE_NGIS_LAG "Kan ikke endre ..NGIS-LAG på fil med data, bruker:"
#define FYBA_STRING_INVALID_BUE          "OBS! Ulovlig bue i filen:"
#define FYBA_STRING_CANT_CHANGE_ORIGO_NOE "Kan ikke endre ..ORIGO-NØ på fil med data, bruker:"
#define FYBA_STRING_PROB_TOO_LONG_PINFO  "Sannsynligvis for lang PINFO !"
#define FYBA_STRING_NO_HOEYDE_WITH_NAD   "Gruppen har ..NAD, kan ikke legge inn høyde på punktnivå i:"
#define FYBA_STRING_NO_HOEYDE_WITH_NAH   "Gruppen har ..NAH, kan ikke legge inn dybde på punktnivå i: "
#define FYBA_STRING_LINE_TOO_LONG        "For lang SOSI-linje (max 1024 tegn), linjen forkortes. Gruppe: "
#define FYBA_STRING_INVALID_SERIAL       "Ulovlig serienummer:"
#define FYBA_STRING_INVALID_LINE_NR      "Ulovlig linjenummer i tabell for upakka info:"
#define FYBA_STRING_INVALID_GROUP_NR     "Ulovlig gruppenummer, merking fungerer ikke :"
#define FYBA_STRING_ERR_READING_BUFFER   "Feil ved les fra ringbuffer!"
#define FYBA_STRING_ERR_WRITING_BUFFER   "Feil ved skriv til ringbuffer!"
#define FYBA_STRING_MUST_INIT_INDEX      "Indekstabellene må initieres før lagring"
#define FYBA_STRING_ERR_READING_SEARCHT  "Feil ved les fra geografisk søketabell!"
#define FYBA_STRING_ERR_WRITING_SEARCHT  "Feil ved skriv til geografisk søketabell!"
#define FYBA_STRING_ERR_READING_GROUPT   "Feil ved les fra gruppetabell!"
#define FYBA_STRING_ERR_WRITING_GROUPT   "Feil ved skriv til gruppetabell!"
#define FYBA_STRING_ERR_READING_SERIALT  "Feil ved les fra serienummer-tabell!"
#define FYBA_STRING_ERR_WRITING_SERIALT  "Feil ved skriv til serienummer-tabell!"
#define FYBA_STRING_ERR_READING_INFOT    "Feil ved les fra info-tabell!"
#define FYBA_STRING_ERR_WRITING_INFOT    "Feil ved skriv til info-tabell!"
#define FYBA_STRING_ERR_INFOT_FULL       "Tabell for upakka info er full!"
#define FYBA_STRING_ERR_READING_BRUKT    "Feil ved les fra brukt-tabell!"
#define FYBA_STRING_ERR_WRITING_BRUKT    "Feil ved skriv til brukt-tabell!"
#define FYBA_STRING_NO_BLANKS_FILENAME   "Kan ikke opprette katalog for indeksfiler når det er blanke sist i filnavnet!\n"
#define FYBA_STRING_TOO_MANY_CHOICES     "For mange utvalg, ikke plass til:"
#define FYBA_STRING_MISPLACED_CHOICE     "Feilplasert utvalgslinje:"
#define FYBA_STRING_GROUP_CHOICE_MISSING "Inkludert gruppeuvtalg finnes ikke:"
#define FYBA_STRING_INVALID_CHOICE       "Ulovlig utvalgslinje:"
#define FYBA_STRING_NO_COMPLEX_CHOICE    "Komplekse utvalg (..OG og ..ELLER) fungerer ikke for PINFO!"
#define FYBA_STRING_GAP_IN_LEVEL         "Ulovlig sprang i nivå!:"
#define FYBA_STRING_TOO_MANY_PRIORITIES  "For mange prioriteter, mister prioritet :"
#define FYBA_STRING_DUPLICATE_DEFINITION "Lag er dobbeltdefinert i utvalg :"
#define FYBA_STRING_UNKNOWN_ERROR        "Ukjent feilmelding. Nr.: %d"

# endif
