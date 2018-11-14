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