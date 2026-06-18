#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    long long val, lazy;
    int pr, sz;
    Node *l, *r;
 
    Node(long long v) {
        val = v;
        lazy = 0;
        pr = rand();
        sz = 1;
        l = r = NULL;
    }
};
 
int sz(Node* t) {
    return t ? t->sz : 0;
}
 
void push(Node* t) {
    if (!t || t->lazy == 0) return;
 
    if (t->l) {
        t->l->val += t->lazy;
        t->l->lazy += t->lazy;
    }
 
    if (t->r) {
        t->r->val += t->lazy;
        t->r->lazy += t->lazy;
    }
 
    t->lazy = 0;
}
 
void upd(Node* t) {
    if (t) {
        t->sz = 1 + sz(t->l) + sz(t->r);
    }
}
 
void split(Node* t, long long x, Node* &a, Node* &b) {
    if (!t) {
        a = b = NULL;
        return;
    }
 
    push(t);
 
    if (t->val <= x) {
        split(t->r, x, t->r, b);
        a = t;
    } else {
        split(t->l, x, a, t->l);
        b = t;
    }
 
    upd(t);
}
 
Node* merge(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;
 
    push(a);
    push(b);
 
    if (a->pr > b->pr) {
        a->r = merge(a->r, b);
        upd(a);
        return a;
    } else {
        b->l = merge(a, b->l);
        upd(b);
        return b;
    }
}
 
long long getMax(Node* t) {
    push(t);
 
    while (t->r) {
        t = t->r;
        push(t);
    }
 
    return t->val;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        Node* root = NULL;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            Node *left, *right;
 
            split(root, x, left, right);
 
            if (right) {
                right->val += x;
                right->lazy += x;
            }
 
            Node* cur = new Node(x);
 
            root = merge(merge(left, cur), right);
        }
 
        cout << getMax(root) << '
';
    }
 
    return 0;
}