/* Responsive Design */
@media (max-width: 768px) {
    .header {
        display: flex;
        flex-direction: row;          /* ఒకే లైన్ లో */
        align-items: center;          /* center alignment */
        justify-content: space-between; /* logo ← → icons */
        padding: 10px 12px;
        gap: 10px;
    }

    .search-box {
        flex: 1;                      /* మధ్యలో space తీసుకోడానికి */
        max-width: 180px;
    }

    .search-input {
        width: 100%;
        font-size: 14px;
        padding: 8px 35px 8px 12px;
    }
    
    .header-icons {
        display: flex;
        align-items: center;
        gap: 8px;                     /* icons మధ్య చిన్న gap */
    }

    .icon-link {
        width: 34px;
        height: 34px;
        font-size: 20px;
    }
    
    .categories{
        display: none;                /* mobile లో hide */
    }

    .header-sections {
        display: none;                /* mobileలో hide */
    }
}

