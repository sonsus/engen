//From util.h 

vector<Sent> sents
struct Doc{
    vector<Sent> sents;
    int didx;
    string filename;
}

typedef vector<Doc> Corpus/Mention/MentionList/ChaDict;

Expression // dynet abstraction for computation graph nodes and edges

//https://dynet.readthedocs.io/en/latest/operations.html


curr_xt, curr_et, curr_lt are suspected candids for 


  map<unsigned, unsigned> map_eidx_pos; // eidx to pos in entitylist mapping
  map<unsigned, unsigned> map_pos_eidx; // pos to eidx in entitylist mapping


    int curr_tt = 0;
    int curr_et = 0;
    int curr_lt = 1;
    int curr_xt = xSOS;

//--> word i|j|k  == word tt|et|lt ??
    entitynlm.cc : 338 

//generation function starts from
    entitynlm.cc : 310 





//dickens.oliver.tokens

paragraphId sentenceID  tokenId beginOffset endOffset   whitespaceAfter headTokenId originalWord    normalizedWord  lemma       pos ner deprel  inQuotation char        acte            rId 
7   7   409 2313    2319    S   407 BUMBLE  BUMBLE  BUMBLE  NNP O   pobj    false   -1
7   8   684 3824    3830        681 BUMBLE  BUMBLE  BUMBLE  NNP O   conj    false   -1

