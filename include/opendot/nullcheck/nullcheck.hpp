namespace opendot {
    namespace utility {
        class nullcheck {
            public:

                template<typename type>
                static bool isnull(type* _arg) { return (_arg == nullptr); }
                
                template<typename type>
                static bool notnull(type* _arg) { return (_arg != nullptr); }
        
        };
    } // namespace utility
} // namespace name
